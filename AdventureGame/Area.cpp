#include "Area.h"
#include <vector>
#include <iostream>
#include <string>


Area::Area()
	
	
{
}

Area::Area(std::string name, std::string description)
	:connectedAreas()
	,Thing(name, description)
	
{
}



void Area::Look()
{
	std::cout << "Description: " << std::endl;
	std::cout << description << std::endl;
	std::cout << std::endl;
	PrintItems();
	std::cout << std::endl;
	std::cout << "Connected Areas: " << std::endl;
	for (int i = 0; i < connectedAreas.size(); ++i)
	{
		std::cout << connectedAreas[i]->GetName() << std::endl;
	}
}

std::string Area::GetName()
{
	return name;
}

void Area::SetName(std::string newName)
{
	name = newName;
}

std::string Area::GetDescription()
{
	return description;
}

void Area::SetDescription(std::string newDescription)
{
	description = newDescription;
}

std::vector<Area*> Area::GetConnectedAreas()
{
	return connectedAreas;
}

void Area::AddConnectedArea(Area* newAreaPtr)
{
	connectedAreas.push_back(newAreaPtr);
}

void Area::PrintConnectedAreas()
{
	std::cout << "Connected Areas: " << std::endl;
	for (int i = 0; i < connectedAreas.size(); ++i)
	{
		std::cout << connectedAreas[i]->GetName() << std::endl;
	}
}

void Area::AddItem(Item* newItem)
{
	itemVector.push_back(newItem);
}

void Area::PrintItems()
{
	std::cout << "ITEMS: " << std::endl;
	for (int i = 0; i < itemVector.size(); ++i)
	{
		std::cout << " -" << itemVector[i]->GetName() << std::endl;
	}
}

std::vector<Item*> Area::GetItems()
{
	return itemVector;
}
