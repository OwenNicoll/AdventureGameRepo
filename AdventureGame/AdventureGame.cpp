// AdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "enemy.h"
#include "Item.h"
#include "Area.h"
#include<map>




int main()
{
  
   // Three instances of Area class

    // Forest Area
    Area forest;
    Area* forestPtr = &forest;
    forest.name = "Forest";
    forest.description = "A damp forest full of wildlife";


    // Village Area
    Area village;
    Area* villagePtr = &village;
    village.name = "Village";
    village.description = "A quiet, peaceful village on the edge of a forest";

    // Castle Area
    Area castle;
    Area* castlePtr = &castle;
    castle.name = "Castle";
    castle.description = "A guarded castle on a hilltop";

    // Connected Areas
    forest.connectedAreas.push_back(villagePtr);
    village.connectedAreas.push_back(forestPtr);
    village.connectedAreas.push_back(castlePtr);
    castle.connectedAreas.push_back(villagePtr);

    // Player
    Player player1;
    player1.name = "Player One";
    player1.currentArea = &forest;
    player1.health = 100;

    std::map<std::string, Area> areaMap;
    areaMap["Forest"] = forest;
    areaMap["Village"] = village;
    
   
    // String to hold players command
    std::string command;
    std::string target;

    // Get command from player
    std::cout << "Enter Command.....";
    std::cin >> command;

    if (command == "Look")
    {
        std::cout << "Look Where?..." << std::endl;
        std::cin >> target;
        areaMap[target].Look();
    }
    if (command == "Go")
    {
        std::cout << "Go Where?..." << std::endl;
        std::cout << player1.currentArea->name;
        std::cin >> target;
        player1.Go(&areaMap[target]);
        std::cout << player1.currentArea->name;
    }

   

    


    

    
   


    





    
    
}

