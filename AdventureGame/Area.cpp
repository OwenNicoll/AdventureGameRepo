#include "Area.h"
#include <vector>
#include <iostream>
#include <string>


Area::Area()
	: name("")
	, description("")
{
}

Area::Area(std::string name, std::string description, std::vector<Area*> connectedAreas)
	:name(name)
	, description(description)
	,connectedAreas()
	
{
}



void Area::Look()
{
	std::cout << description << std::endl;
	for (int i = 0; i < connectedAreas.size(); ++i)
	{
		std::cout << connectedAreas[i]->name;
	}
}
