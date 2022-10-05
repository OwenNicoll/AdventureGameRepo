#pragma once
#include <string>
#include <vector>
class Area
{
public:

	void Look(Area target);
		
	std::string name;
	std::string description;
	std::vector<std::string> connectedAreas;
	std::vector<std::string> features;
	std::vector<std::string> exits;
};  

