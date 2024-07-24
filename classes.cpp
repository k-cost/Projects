#include <iostream>
#include <string>

class itemSelection { //creates a class for vending machine items
public:


std::string itemName; 
double price;

void select(){ //function to output selection in main
    std::cout << "You have selected " << itemName << " for $" << price;
}

};

int main() {

    //declares itemSelection variables
    itemSelection item1;
    itemSelection item2;
    itemSelection item3;
    itemSelection item4;
    itemSelection item5;
    itemSelection item6;
    
    item1.itemName = "Chips";//declare variable for Chips
    item1.price = 2.50;

    item2.itemName = "Soda"; //declare variable for soda
    item2.price = 1.50;

    item3.itemName = "Honey Bun"; //declare variable for Honey Bun
    item3.price = 2.00;

    item4.itemName = "Donuts"; //declare variable for Donuts
    item4.price = 2.00;

    item5.itemName = "Candy Bar"; //Declare Candy Bar
    item5.price = 1.00;

    item6.itemName = "M&Ms"; //Declare M&Ms
    item6.price = 1.00;

     bool anotherSelection = true;

while (anotherSelection == true) {

    std::cout << "Please Enter Your Selection : " << std::endl;

    //Menue choice 
    std::cout << "1. " << item1.itemName << " - $" << item1.price << std::endl;
    std::cout << "2. " << item2.itemName << " - $" << item2.price << std::endl;
    std::cout << "3. " << item3.itemName << " - $" << item3.price << std::endl;
    std::cout << "4. " << item4.itemName << " - $" << item4.price << std::endl;
    std::cout << "5. " << item5.itemName << " - $" << item5.price << std::endl;
    std::cout << "6. " << item6.itemName << " - $" << item6.price << std::endl;
    
    int choice; //declare variable for player choice
    std::cin >> choice;
    
    //conditional for choice
    switch (choice) {
        case 1:
        item1.select();
        break;

        case 2:
        item2.select();
        break;

        case 3:
        item3.select();
        break;

        case 4:
        item4.select();
        break;

        case 5:
        item5.select();
        break;

        case 6:
        item6.select();
        break;

        default:
        std::cout << "Sorry, not a valid input!";
        break;
    }
    
    int goAgain;
    std::cout << "Would you like to make another selection?" << std::endl;
    std::cout << "Enter 1 for YES or 2 for NO" << std::endl;
    std::cin >> goAgain;
    if(goAgain == 1){
        anotherSelection = true;
    }
    else if (goAgain == 2){
        anotherSelection = false;
    }


}

 return 0;  
}