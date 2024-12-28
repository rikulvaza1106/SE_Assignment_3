/*Class for a Simple Calculator 
o Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects to use these functions. 
o Objective: Introduce basic class structure.
*/

#include <iostream>
using namespace std;

class Calculator 
{
public:
    
    double add(double a, double b) 
	{
        return a + b;
    }

    double subtract(double a, double b) 
	{
        return a - b;
    }

    double multiply(double a, double b) 
	{
        return a * b;
    }

    double divide(double a, double b) 
	{
        if (b != 0) 
		{
            return a / b;
        } else {
            cout << "Error: Division by zero is not allowed!" << endl;
            return 0; // Return 0 for invalid division
        }
    }
};

main() 
{
    Calculator calc; 
    
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) 
	{
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }

}
