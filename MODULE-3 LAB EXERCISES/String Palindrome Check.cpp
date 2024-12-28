/*String Palindrome Check 
o Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards). 
o Objective: Practice string operations.
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) 
{
    
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    string cleaned = "";
    for (char c : str) 
	{
        if (isalnum(c)) 
		{
            cleaned += c;
        }
    }

    int start = 0;
    int end = cleaned.length() - 1;

    while (start < end) 
	{
        if (cleaned[start] != cleaned[end]) 
		{
            return false;
        }
        ++start;
        --end;
    }

    return true;
}

main() 
{
    string input;

    cout << "Enter a string to check if it's a palindrome: ";
    getline(cin, input);

    if (isPalindrome(input)) 
	{
        cout << "The string \"" << input << "\" is a palindrome." << endl;
    } else 
	{
        cout << "The string \"" << input << "\" is not a palindrome." << endl;
    }

}
