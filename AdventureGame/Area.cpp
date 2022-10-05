#include "Area.h"
#include <vector>
#include <iostream>
#include <string>
#include <vector>

void Area::Look(Area target)
{
	std::cout << "Description: " << target.description << "\n";
	std::cout << "Connected Areas: \n";
	for (int i = 0; i < target.connectedAreas.size(); i++)
	{
		std::cout << target.connectedAreas[i] << "\n";
	}
}
