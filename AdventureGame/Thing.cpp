#include "Thing.h"

Thing::Thing()
{
}

Thing::Thing(std::string newName, std::string newDescription)
	:name(newName)
	,description(newDescription)
{
}

Thing::~Thing()
{
}

void Thing::Look()
{
}

std::string Thing::GetName()
{
	return name;
}

std::string Thing::GetDescription()
{
	return description;
}
