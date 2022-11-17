// AdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Item.h"
#include "Area.h"
#include "Monster.h"
#include<map>




int main()
{
  
   // Area Instances

    // Forest Area
    Area forest;
    Area* forestPtr = &forest;
    forest.SetName("Forest");
    forest.SetDescription("A dark, damp woodland full of wildlife");


    // Village Area
    Area village;
    Area* villagePtr = &village;
    village.SetName("Village");
    village.SetDescription("A loneley village weary of strangers, a Highwayman stands guard");

    // Castle Area
    Area castle;
    Area* castlePtr = &castle;
    castle.SetName("Castle");
    castle.SetDescription("A small, guarded keep upon a hilltop");



    // Connected Areas
    forest.AddConnectedArea(villagePtr);
    village.AddConnectedArea(forestPtr);
    village.AddConnectedArea(castlePtr);
    castle.AddConnectedArea(villagePtr);

    // Monsters
    Monster highwayman;
    highwayman.SetName("Highwayman");
    highwayman.SetDamage(2);
    highwayman.SetHealth(50);
    highwayman.SetCurrentArea(villagePtr);
    
    // Player
    Player player1;
    player1.SetName("Player One");
    player1.SetCurrentArea(forestPtr);
    player1.SetHealth(100);
    player1.SetDamage(100);

    // Area Map
    std::map<std::string, Area> areaMap;
    areaMap["Forest"] = forest;
    areaMap["Village"] = village;
    areaMap["Castle"] = castle;

    
    // Monster name map
    std::map<std::string, Monster> monsterNameMap;
    monsterNameMap["Highwayman"] = highwayman;
   
    // String to hold players command
    std::string command;
    std::string target;

    do
    {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Your Current Location: " << player1.GetCurrentArea()->GetName() << std::endl;
        std::cout << std::endl;
        std::cout << "Commands: Look, Go, Attack." << std::endl;
        // Get command from player
        std::cout << std::endl;
        std::cout << "Enter Command.....";
        std::cin >> command;

        if (command == "Look")
        {
            std::cout << "Look Where?..." << std::endl;
            std::cout << std::endl;
            std::cin >> target;
            std::cout << std::endl;
            areaMap[target].Look();
        }
        if (command == "Go")
        {
            std::cout << "Go Where?..." << std::endl;
            std::cin >> target;
            player1.Go(&areaMap[target]);
            std::cout << std::endl;
            std::cout << std::endl;
            areaMap[target].PrintConnectedAreas();
        }
        if (command == "Attack")
        {
            std::cout << "Attack what?..." << std::endl;
            std::cin >> target;
            player1.Attack(monsterNameMap[target]);

        }
    } while (command != "Exit");
    
   

    


    

    
   


    





    
    
}

