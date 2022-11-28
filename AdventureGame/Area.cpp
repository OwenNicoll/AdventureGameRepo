#include "Area.h"
#include <vector>
#include <iostream>
#include <string>


Area::Area()
	
	
{
}

Area::Area(std::string name, std::string description, std::vector<Area*> connectedAreas)
	:connectedAreas()
	
{
}



void Area::Look()
{
	std::cout << "Description: " << std::endl;
	std::cout << description << std::endl;
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
