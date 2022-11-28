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
#include <stdlib.h>
#include<Windows.h>




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
    player1.SetHealth(1);
    player1.SetDamage(0);

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

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    // Start Game
   // Intro description
    std::cout << "You find yourself in a large woodland, there is a village ahead" << std::endl;
    do
    {
        SetConsoleTextAttribute(h, 6);
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Your Current Location: " << player1.GetCurrentArea()->GetName() << std::endl;
        std::cout << std::endl;
        std::cout << "Commands: Look, Go, Attack, Exit." << std::endl;
        // Get command from player
        std::cout << std::endl;
        std::cout << "Enter Command.....";
        std::cin >> command;
        

        // If player types "Look"
        if (command == "Look")
        {
            system("CLS");
            SetConsoleTextAttribute(h, 7);
            std::cout << "Look Where?..." << std::endl;
            std::cout << std::endl;
            SetConsoleTextAttribute(h, 6);
            std::cin >> target;
            system("CLS");
            SetConsoleTextAttribute(h, 7);
            std::cout << std::endl;
            areaMap[target].Look();
        }

        // If player types "Go"
        if (command == "Go")
        {
            system("CLS");
            SetConsoleTextAttribute(h, 7);
            std::cout << "Go Where?..." << std::endl;
            SetConsoleTextAttribute(h, 6);
            std::cin >> target;
            system("CLS");
            SetConsoleTextAttribute(h, 7);
            player1.Go(&areaMap[target]);
            std::cout << std::endl;

        }

        // If player types "Attack"
        if (command == "Attack")
        {
            system("CLS");
            SetConsoleTextAttribute(h, 7);
            std::cout << "Attack what?..." << std::endl;
            SetConsoleTextAttribute(h, 6);
            std::cin >> target;
            system("CLS");
            SetConsoleTextAttribute(h, 7);
            player1.Attack(monsterNameMap[target]);
   
        }
    } while ((command != "Exit"));    // Loop back until player types "Exit"
    
    

    


    

    
   


    





    
    
}

