// AdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Item.h"
#include "Area.h"
#include "Monster.h"
#include "Potion.h"
#include<map>
#include <stdlib.h>
#include<Windows.h>




int main()
{
  
   // Area Instances

    // Forest Area
    Area forest("Forest", "A dark, damp woodland full of wildlife");
    Area* forestPtr = &forest;
    


    // Village Area
    Area village("Village", "A loneley village weary of strangers, a Highwayman stands guard");
    Area* villagePtr = &village;
   

    // Castle Area
    Area castle("Castle", "A small, guarded keep upon a hilltop");
    Area* castlePtr = &castle;

    //
 


    // Connected Areas
    forest.AddConnectedArea(villagePtr);
    village.AddConnectedArea(forestPtr);
    village.AddConnectedArea(castlePtr);
    castle.AddConnectedArea(villagePtr);

    // Monsters
    Monster highwayman("Highwayman", villagePtr, 20, 5);
    
    
    // Player
    Player player1("Player One", forestPtr, 100, 20);
    
    // Items
    Item stick("Stick", "Its a stick");
  //  player1.AddToInventory(stick);
    Potion healthPot("Potion", "It heals things");

    healthPot.Use(&player1);
    std::cout << player1.GetHealth();

   
   

    // Area Map
    std::map<std::string, Area> areaMap;
    areaMap["Forest"] = forest;
    areaMap["Village"] = village;
    areaMap["Castle"] = castle;
 
    
    // Monster name map
    std::map<std::string, Monster> monsterNameMap;
    monsterNameMap["Highwayman"] = highwayman;
   
    // Item map
    std::map<std::string, Item> itemMap;
    itemMap[healthPot.GetName()] = healthPot;


    // String to hold players command
    std::string command;
    std::string target;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);







 
    forest.AddItem(&stick);
  



    // Start Game
   // Intro description
    std::cout << "You find yourself in a large woodland, there is a village ahead" << std::endl;
    forest.PrintItems();
    do
    {
        SetConsoleTextAttribute(h, 6);
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Your Current Location: " << player1.GetCurrentArea()->GetName() << std::endl;
        std::cout << std::endl;
        std::cout << "Commands: Look, Go, Attack, Take, Use, Exit." << std::endl;
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

        // If player types "Take"
        if (command == "Take")
        {
            system("CLS");
            SetConsoleTextAttribute(h, 7);
            std::cout << "Take what?..." << std::endl;
            SetConsoleTextAttribute(h, 6);
            std::cin >> target;
            system("CLS");
            SetConsoleTextAttribute(h, 7);
            player1.Take(itemMap[target]);

        }
    } while ((command != "Exit"));    // Loop back until player types "Exit"
    
    

    


    

    
   


    





    
    
}

