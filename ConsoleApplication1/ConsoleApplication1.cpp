// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main()
{
	int a[5] = { 12,21,12,43,56 };
	int ar[2] = { 98,56 };
	//a[2] =  ar;
	for (int i = 0; i < size(a); i++)
	{
		a[i] = 4;
	}

	for (int i = 4 - 1; i >= 0; i--)
	{
		cout << a[i] << endl;

	}

	cout << a[2] << endl;

	system("pause");
    return 0;
}

