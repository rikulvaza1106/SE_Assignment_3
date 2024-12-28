/*Setting Up Development Environment 
o Write a program that asks for two numbers and displays their sum. Ensure this is done after setting up the IDE (like Dev C++ or CodeBlocks). 
o Objective: Help students understand how to install, configure, and run programs in an IDE. 
*/

#include <iostream>
using namespace std;

main() 
{
    int num1, num2;

    cout << " Enter the first number: ";
    cin >> num1;

    cout << " Enter the second number: ";
    cin >> num2;

    int sum = num1 + num2;
        
    cout << "\n\n\tThe sum of " << num1 << " and " << num2 << " is " << sum << "." << std::endl;
    
}
