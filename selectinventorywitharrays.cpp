#include <iostream>

int main () {

    std::cout << "+---------------------------------+" << std::endl;
    std::cout << "+---------Player Inventory--------+" << std::endl;
    std::cout << "+---------------------------------+" <<std::endl << std::endl;
    
    bool exitMenu;
    exitMenu = false;

    while (exitMenu == false){
    std::cout << "Please press 1 or 2 to make your selection\n\n"; 
    std::cout << "+---------------------------------+\n";
    std::cout << "+--1. Potions  2.Weapons 3. Exit--+\n" ;
    std::cout << "+---------------------------------+\n\n";
    std::string potions[5] = {"Healing","Stamina","Magicka","Light","Fire" };
     
    int menuSelect;
    std::cin >> menuSelect;
    if(menuSelect == 1){
        std::cout << "+-------------Potions-------------+" << std::endl;
    for (int i = 0; i <5; i++){
        std::cout << potions[i] << std::endl;
    }
    }
    else if (menuSelect == 2){ 
    std::cout << "\n";
    std::string weapons[5] = {"Great Sword", "Short Sword", "Axe", "Daggers", "Crossbow"};
    std::cout << "+-------------Weapons-------------+" <<std::endl; 
    for (int i =0; i <5; i++){
        std::cout << weapons[i] << std::endl;
    }
    }
     
    else if (menuSelect == 3){
    
        std::cout <<"\nGoodbye!\n1";
        exitMenu = true;
    }
     
 
    }
return 0;
}
