// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main()
{
	int arr[6][2] = { {12,43} , {32,654}, {54,23}, {43,543},{23},{23,54} };
	
	for (int i = 0; i < size(arr); i++)
	{
		cout << "" << endl;
		for (int j = 0; j < size(arr[i]); j++)
		{
			cout << arr[i][j] << "  ";
		}
	}	
	cout << "" << endl;
	system("pause");
    return 0;
}

