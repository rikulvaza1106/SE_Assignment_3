/*Basic Input/Output 
o Write a C++ program that accepts user input for their name and age and then displays a personalized greeting. 
o Objective: Practice input/output operations using cin and cout.
*/

#include <iostream>
using namespace std;

main() 
{
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); 
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

}
