/* Multiplication Table 
o Write a C++ program to display the multiplication table of a given number using a for loop. 
o Objective: Practice using loops.
*/

#include <iostream>
using namespace std;

main() 
{
    int number;

    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    cout << "Multiplication Table of " << number << " is: " << endl;
    for (int i = 1; i <= 10; ++i) 
	{
        cout << number << " x " << i << " = " << number * i << endl;
    }

}
 