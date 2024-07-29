#include <iostream>
int main (){
    std::cout << "Please enter 5 integers\n\n";
    int intArr[5];

    for (int i = 0; i <5; ++i){
        std::cin >> intArr[i];
    
    }

    int sum =0;

    for (int s =0; s <5; ++s){
        sum = sum+intArr[s];
    }

    std::cout << "The sum of the integers is : " << sum << std::endl;
    std::cout << "The average of the inegers is : " <<sum/5 <<std::endl;

    return 0;
}