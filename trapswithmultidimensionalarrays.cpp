#include <iostream>

int main (){
    std::cout << "Disarm the traps before exiting the dungeon. The traps are hidden beneath the floor, which is made up of a grid of 4x4 tiles.\n\n";

    int dungeontiles[4][4] = {//initializes the dynamic array that makes up the floor tiles
        {1,0,0,0},
        {0,0,1,1},
        {0,0,0,0},
        {0,0,0,1}

    };
    int disarmedTraps; //initializes the variable for the while loop
    while (disarmedTraps < 4){
        int row, column;

        std::cout << "Please enter a row to search for traps, choose a number between 0 and 3\n\n";
        std::cin >> row; //gets player input for a row to search

        std::cout << "\n\nPlease enter a column to search, choose a number between 0 and 3 \n\n";
        std::cin >> column; //gets and stores player input for a column to search

        if (dungeontiles[row][column]){
            dungeontiles[row][column] = 0;

            disarmedTraps++;

            std::cout << "Success! You have found and disarmed a trap!\n\n";
            std::cout << "Traps left to disarm : " << (4-disarmedTraps) << "\n\n";

        }

        else {
            std::cout << "There are no hidden traps on the selected tile\n\n";
            std::cout << "Traps left to disarm : " << (4-disarmedTraps) << "\n\n";
        }

    }
    std::cout << "Congradulations! You have successfully disarmed all the traps and may escape the dungeon!\n\n";

    }
