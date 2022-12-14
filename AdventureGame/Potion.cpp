
#include "Potion.h"
#include <iostream>

Potion::Potion()
	:Item("", "")
{
}

Potion::Potion(std::string newName, std::string newDescription)
	:Item(newName, newDescription)
{
}

Potion::~Potion()
{
}

void Potion::Use(Creature* target)
{
	target->SetHealth(200);
}

void Potion::Use(Thing target)
{
	std::cout << "Nothing interesting happens..." << std::endl;
}
