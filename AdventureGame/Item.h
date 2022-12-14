#pragma once
#include <string>
#include <vector>
#include "Creature.h"
#include "Thing.h"
class Item : public Thing
{
public:

	Item();
	Item(std::string newName, std::string newDescription);
	~Item();

	void Use(Creature* target);
	void Use(Thing target);

	std::string name;
	std::string description;
};

