#include <iostream>

int main () {

    std::cout << "+---------------------------------+" << std::endl;
    std::cout << "+---------Player Inventory--------+" << std::endl;
    std::cout << "+---------------------------------+" <<std::endl << std::endl;
    
    std::string potions[5] = {"Healing","Stamina","Magicka","Light","Fire" };
    std::cout << "+-------------Potions-------------+" << std::endl;
    for (int i = 0; i <5; i++){
        std::cout << potions[i] << std::endl;
    }

    std::cout << "\n";
    std::string weapons[5] = {"Great Sword", "Short Sword", "Axe", "Daggers", "Crossbow"};
    std::cout << "+-------------Weapons-------------+" <<std::endl; 
    for (int i =0; i <5; i++){
        std::cout << weapons[i] << std::endl;
    }

}