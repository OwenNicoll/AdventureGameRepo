#pragma once
#include <string>
#include <vector>
#include "Thing.h"
class Item : public Thing
{
public:

	Item();
	Item(std::string newName, std::string newDescription);
	~Item();

	std::string name;
	std::string description;
};

