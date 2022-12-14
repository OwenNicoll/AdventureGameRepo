#include "Item.h"

Item::Item()
{
}

Item::Item(std::string newName, std::string newDescription)
	:Thing(newName, newDescription)
{
}

Item::~Item()
{
}
