/* Operator Demonstration 
Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results. 
Objective: Reinforce understanding of different types of operators in C++. 
*/

#include <iostream>
using namespace std;

main() 
{

    int a = 10, b = 5;
    bool x = true, y = false;
    int num1 = 6, num2 = 3;

    cout << "Arithmetic Operators:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Addition (a + b): " << a + b << endl;
    cout << "Subtraction (a - b): " << a - b << endl;
    cout << "Multiplication (a * b): " << a * b << endl;
    cout << "Division (a / b): " << a / b << endl;
    cout << "Modulus (a % b): " << a % b << endl << endl;

    cout << "Relational Operators:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a == b: " << (a == b) << endl; 
    cout << "a != b: " << (a != b) << endl; 
    cout << "a > b: " << (a > b) << endl;   
    cout << "a < b: " << (a < b) << endl;   
    cout << "a >= b: " << (a >= b) << endl; 
    cout << "a <= b: " << (a <= b) << endl << endl;

    cout << "Logical Operators:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "x && y: " << (x && y) << endl; 
    cout << "x || y: " << (x || y) << endl; 
    cout << "!x: " << (!x) << endl;         
    cout << "!y: " << (!y) << endl << endl;

    cout << "Bitwise Operators:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "num1 & num2: " << (num1 & num2) << endl; 
    cout << "num1 | num2: " << (num1 | num2) << endl; 
    cout << "num1 ^ num2: " << (num1 ^ num2) << endl; 
    cout << "~num1: " << (~num1) << endl; 
    cout << "num1 << 1: " << (num1 << 1) << endl; 
    cout << "num1 >> 1: " << (num1 >> 1) << endl << endl;

}
