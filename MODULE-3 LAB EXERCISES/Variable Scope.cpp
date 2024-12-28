/*Variable Scope 
o Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope. 
o Objective: Reinforce the concept of variable scope.
*/

#include <iostream>
using namespace std;

int globalVar = 100;

void displayGlobal() 
{
    cout << "Inside displayGlobal function: Global variable = " << globalVar << endl;
}

void localScopeExample() 
{
    int localVar = 50;
    cout << "Inside localScopeExample function: Local variable = " << localVar << endl;
    
    cout << "Inside localScopeExample function: Global variable = " << globalVar << endl;
}

main() 
{
    
    int localVar = 20;
    
    cout << "Inside main function: Local variable = " << localVar << endl;
    cout << "Inside main function: Global variable = " << globalVar << endl;

    displayGlobal();
    localScopeExample();

    cout << "Back in main: Local variable = " << localVar << endl;

}
