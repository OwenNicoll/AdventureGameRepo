#pragma once
#include <string>
#include <vector>
class Area
{
public:
	Area();
	Area(std::string name, std::string description, std::vector<Area*> connectedAreas);

	void Look();
		
	std::string name;
	std::string description;
	std::vector<Area*> connectedAreas;
	
	
};  

