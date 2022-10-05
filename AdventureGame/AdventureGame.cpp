// AdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "enemy.h"
#include "Item.h"
#include "Area.h"


// Function to print Player values
void PrintPlayer(Player instance)
{
    std::cout << "Name: " << instance.name << "/n";
    std::cout << "Health: " << instance.health << "/n";
    std::cout << "Damage: " << instance.damage << "/n";
    for (int i = 0; i < instance.inventory.size(); i++)
    {
        std::cout << instance.inventory[i] << "/n";
    }
}

int main()
{
   
    std::string command;
    std::string target;

    Area forest;
    forest.name = "Forest";
    forest.description = "A damp, dense woodland";

    // Get user command
    std::cout << "Enter Command: ";
    std::cin >> command;

    if (command == "Look")
    {
        std::cout << "Where would you like to look?";
        std::cin >> target;
        
        
    }





    
    
}

