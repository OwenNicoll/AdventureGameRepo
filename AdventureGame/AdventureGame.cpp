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
    forest.name = "Forest";
    forest.description = "A damp forest full of wildlife";

    // Village Area
    Area village;
    village.name = "Village";
    village.description = "A quiet, peaceful village on the edge of a forest";

    // Castle Area
    Area castle;
    castle.name = "Castle";
    castle.description = "A guarded castle on a hilltop";

    // Connected Areas
    forest.connectedAreas.push_back(village);
    village.connectedAreas.push_back(forest);
    village.connectedAreas.push_back(castle);
    castle.connectedAreas.push_back(village);

    village.PrintArea();

    // Player
    Player player1;
    player1.name = "Player One";
    player1.currentArea = forest;
    player1.health = 100;

    player1.PrintPlayer();

    std::map<std::string, Area> areaMap;
    areaMap["Here"] = player1.currentArea;
    areaMap["Forest"] = forest;
    areaMap["Village"] = village;
    
   
    // String to hold players command
    std::string command;

    // Get command from player
    std::cout << "Enter Command.....";
    std::cin >> command;

    if (command == "Look")
    {
        std::cout << "Look Where?" << std::endl;
        std::string target;
        std::cin >> target;
        areaMap[target].PrintArea();     
    }
    if (command == "Go")
    {
        std::cout << "Go Where?" << std::endl;
        std::cout << player1.currentArea.name;
        std::string target;
        std::cin >> target;
        player1.currentArea = areaMap[target];
        std::cout << player1.currentArea.name;
    }

   

    


    

    
   


    





    
    
}

