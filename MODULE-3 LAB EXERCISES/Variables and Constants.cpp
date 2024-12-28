/*Variables and Constants 
o Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them. 
o Objective: Understand the difference between variables and constants.
*/

#include <iostream>
using namespace std;

main() 
{
    int integerVar = 10;
    double doubleVar = 20.5;
    char charVar = 'A';
    string stringVar = "Hello, World!";

    const double PI = 3.14159;

    integerVar += 5;
    doubleVar *= 2; 
    charVar = 'B';  

    cout << "Updated integer value: " << integerVar << endl;
    cout << "Updated double value: " << doubleVar << endl;
    cout << "Updated character value: " << charVar << endl;
    cout << "String value: " << stringVar << endl;

    cout << "Value of PI (constant): " << PI << endl;

}
