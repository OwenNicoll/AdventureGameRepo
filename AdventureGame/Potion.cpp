
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
