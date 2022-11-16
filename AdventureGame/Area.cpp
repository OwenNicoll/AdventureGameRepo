#include "Area.h"
#include <vector>
#include <iostream>
#include <string>


Area::Area()
	: name("")
	, description("")
{
}

Area::Area(std::string name, std::string description, std::vector<Area> connectedAreas)
	:name(name)
	, description(description)
	
{
}

void Area::PrintArea()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Description: " << description << std::endl;
	std::cout << "Connected Areas: ";

	for (int i = 0; i < connectedAreas.size(); ++i)
	{
		std::cout << connectedAreas[i].name << std::endl;;
	}
		

}

void Area::Look(Area target)
{
	std::cout << "Description: " << target.description << std::endl;
	std::cout << "Connected Areas: " << std::endl;
	for (int i = 0; i < target.connectedAreas.size(); i++)
	{
		std::cout << target.connectedAreas[i].name <<std::endl;
	}
}
