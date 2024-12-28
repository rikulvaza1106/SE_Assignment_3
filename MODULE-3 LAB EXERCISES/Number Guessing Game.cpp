/*Number Guessing Game 
o Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints 
if the guess is too high or too low. Use loops to allow the user multiple attempts. 
o Objective: Understand while loops and conditional logic.
*/

#include <iostream>
using namespace std;

main() 
{
    int secretNumber = 42; 
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess the secret number between 1 and 100." << endl;

    while (true) 
	{
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) 
		{
            cout << "Too high! Try again." << endl;
        } 
        else if (userGuess < secretNumber) 
		{
            cout << "Too low! Try again." << endl;
        } 
        else 
		{
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
            cout << "It took you " << attempts << " attempts." << endl;
            break; 
        }
    }
}
