/* Type Conversion 
Write a C++ program that performs both implicit and explicit type conversions and prints the results. 
Objective: Practice type casting in C++. 
*/
#include <iostream>
using namespace std;

main() 
{
    
    int intVal = 100;          
    double doubleVal = intVal; 

    cout << "Implicit Type Conversion: " << endl;
    cout << "Integer value: " << intVal << endl;
    cout << "Converted double value: " << doubleVal << endl << endl;

    double dbl = 9.876;       
    int castedInt = (int)dbl;  

    cout << "Explicit Type Conversion: " << endl;
    cout << "Original double value: " << dbl << endl;
    cout << "Converted integer value: " << castedInt << endl;
}
