#include <iostream>


struct employees {

std::string name;
std::string position;
double wage;
int yearHired;
int ID;

};
int main() {

    employees Alice, Frank, Carl, Helen;

    Alice.name = "Alice Smith";
    Alice.position = "Supervisor";
    Alice.wage = 23.25;
    Alice.yearHired = 2014;
    Alice.ID =30020;

    Frank.name = "Frank Senatra";
    Frank.position = "Team Member";
    Frank.wage = 15.50;
    Frank.yearHired = 2020;
    Frank.ID = 30022;

    Carl.name = "Carl Norton";
    Carl.position = "Manager";
    Carl.wage = 30.00;
    Carl.yearHired = 2021;
    Carl.ID = 30023;

    Helen.name = "Helen Parker";
    Helen.position = "Team Member";
    Helen.wage = 17.00;
    Helen.yearHired = 2019;
    Helen.ID = 30021;

    int getID;

    std::cout << "Welcome to the Employee Portal! To View Your Information, Enter Your Employee ID\n";
    std::cin >> getID;

    switch (getID)
    {
    case 30020:
    std::cout << "ID : " << Alice.ID << " \n" << "Name : " << Alice.name << "\n" << "Role : " << Alice.position << "\n" << "Wage : "<< Alice.wage << "\n" << "Year Hired : " << Alice.yearHired;
        break;
    case 30021:
    std::cout << "ID : " << Helen.ID << "\n" << "Name : " << Helen.name << "\n" << "Role : " << Helen.position << "\n" << "Wage : "<< Helen.wage << "\n" << "Year Hired : " << Helen.yearHired;
        break;
    case 30022 :
    std::cout << "ID : " << Frank.ID << "\n" << "Name : " << Frank.name <<  "\n" << "Role : " << Frank.position << "\n" << "Wage : "<< Frank.wage << "\n" << "Year Hired : " << Frank.yearHired;
        break;
    case 30023:
    std::cout << "ID : " << Carl.ID << "\n" << "Name : " << Carl.name << "\n" << "Role : " << Carl.position << "\n" << "Wage : "<< Carl.wage << "\n" << "Year Hired : " << Carl.yearHired;
        break;
    
    default:
    std::cout <<  "That Is Not A Valid Employee ID";
        break;
    }



}