#pragma once
#include "Thing.h"
#include "Item.h"
#include <string>
#include <vector>
class Area : public Thing
{
public:
	Area();
	Area(std::string name, std::string description);

	void Look();
	
	// Name Getter and Setter
	std::string GetName();
	void SetName(std::string newName);

	// Description Getter and Setter
	std::string GetDescription();
	void SetDescription(std::string newDescription);

	// Connected area setter
	std::vector<Area*> GetConnectedAreas();
	void AddConnectedArea(Area* newAreaPtr);
	void PrintConnectedAreas();

	void AddItem(Item newItem);

private:
	std::vector<Area*> connectedAreas;
	std::vector<Item> itemVector;
	
	
};  

