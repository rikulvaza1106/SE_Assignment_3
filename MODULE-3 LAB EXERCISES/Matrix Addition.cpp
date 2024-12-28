/*Matrix Addition 
o Write a C++ program to perform matrix addition on two 2x2 matrices. 
o Objective: Practice multi-dimensional arrays.
*/

#include <iostream>
using namespace std;

main() 
{
    const int SIZE = 2; 
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE];

    cout << "Enter elements of the first 2x2 matrix:" << endl;
    for (int i = 0; i < SIZE; ++i) 
	{
        for (int j = 0; j < SIZE; ++j) 
		{
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of the second 2x2 matrix:" << endl;
    for (int i = 0; i < SIZE; ++i) 
	{
        for (int j = 0; j < SIZE; ++j) 
		{
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < SIZE; ++i) 
	{
        for (int j = 0; j < SIZE; ++j) 
		{
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "The resultant matrix after addition is:" << endl;
    for (int i = 0; i < SIZE; ++i) 
	{
        for (int j = 0; j < SIZE; ++j) 
		{
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}
