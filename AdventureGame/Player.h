#pragma once
#include <string>
#include <vector>
class Player
{
public:
	std::string name;
	std::string description;
	int health;
	int damage;
	std::vector<std::string> inventory;
};

