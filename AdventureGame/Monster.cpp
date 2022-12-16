#include "Monster.h"
#include <iostream>

Monster::Monster()
    :name(name)
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

Monster::Monster(std::string name, Area* currentArea, int health, int damage)
    :name(name)
    ,currentArea(currentArea)
    ,Creature(health, damage)
   
{
}

void Monster::PotionEffect()
{
    health -= 50;

    std::cout << "You damage the "<< name <<" with the potion" << std::endl;
}

Area* Monster::GetCurrentArea()
{
    return currentArea;
}

void Monster::SetCurrentArea(Area* newArea)
{
    currentArea = newArea;
}
