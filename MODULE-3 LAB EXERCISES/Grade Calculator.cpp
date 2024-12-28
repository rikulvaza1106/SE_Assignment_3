/*Grade Calculator 
Write a C++ program that takes a student’s marks as input and calculates the grade based on if-else conditions.
*/

#include <iostream>
using namespace std;

main() 
{
    
    float marks;
    string grade;

    cout << "Enter the student's marks: ";
    cin >> marks;

    if (marks >= 90) 
	{
        grade = "A";
    }
    else if (marks >= 75) 
	{
        grade = "B";
    }
    else if (marks >= 60) 
	{
        grade = "C";
    }
    else if (marks >= 50) 
	{
        grade = "D";
    }
    else 
	{
        grade = "F";
    }

    cout << "The grade for marks " << marks << " is: " << grade << endl;

}
