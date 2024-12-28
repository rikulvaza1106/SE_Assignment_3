/*Array Sum and Average 
o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results. 
o Objective: Understand basic array manipulation.
*/

#include <iostream>
using namespace std;

main() 
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) 
	{
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) 
	{
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / n;

    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

}
