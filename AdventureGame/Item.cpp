#include "Item.h"
#include <iostream>
Item::Item()
	:name("Naw")
{
}

Item::Item(std::string newName, std::string newDescription)
	:Thing(newName, newDescription)
{
}

Item::~Item()
{
}


void Item::Use(Thing target)
{
	std::cout << "Nothing interesting happens..." << std::endl;
}
