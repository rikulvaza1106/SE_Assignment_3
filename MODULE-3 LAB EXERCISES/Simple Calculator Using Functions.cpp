/*Simple Calculator Using Functions 
o Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). The main function should call these based on user input. 
o Objective: Practice defining and using functions in C++.
*/

#include <iostream>
using namespace std;

float add(float a, float b) 
{
    return a + b;
}

float subtract(float a, float b) 
{
    return a - b;
}

float multiply(float a, float b) 
{
    return a * b;
}

float divide(float a, float b) 
{
    if (b != 0) 
	{
        return a / b;
    } else 
	{
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

main() 
{
    float num1, num2, result;
    int choice;

    cout << "Simple Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(choice) 
	{
        case 1:
            result = add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 4:
            result = divide(num1, num2);
            if (num2 != 0) 
			{
                cout << "Result: " << result << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please choose a valid operation (1-4)." << endl;
    }

}
