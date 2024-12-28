/* Factorial Calculation Using Recursion 
o Write a C++ program that calculates the factorial of a number using recursion. 
o Objective: Understand recursion in functions.
*/

#include <iostream>
using namespace std;

unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1) 
	{ 
        return 1;
    } else 
	{
        return n * factorial(n - 1); 
    }
}

main() 
{
    int number;

    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> number;

    if (number < 0) 
	{
        cout << "Factorial is not defined for negative numbers." << endl;
    } else 
	{
        unsigned long long result = factorial(number);
        cout << "The factorial of " << number << " is: " << result << endl;
    }

}
