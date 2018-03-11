// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int i = 0; // инициализация глобальной переменной для подсчёта кол-ва рекурсивных вызовов
int Max = 0;  // глобальная переменная для хранения возвращаемого результата рекурсивной функцией

int RecursionFindSum(int ar[6][2], int i)
{
	int Max = 0;
	int count = 0;
	for ( i = 0; i < 6; i++)
	{
		count += ar[i][0];
	}
	if (count % 3 != 0)
		return count;
	else
	{
		return 0;
	}	
}


int main()
{
	int arr[6][2] = {	{00,  01}, 
						{10,  11}, 
						{20,  21}, 
						{30,  31},
						{40,  41},
						{50,  51} };
	
	for (int i = 0; i < size(arr); i++)
	{
		cout << "" << endl;
		for (int j = 0; j < size(arr[i]); j++)
		{
			cout << arr[i][j] << "  ";
		}
	}	
	cout << "" << endl;
	
	int result = RecursionFindSum(arr, i);
	if (Max < result)
	{
		RecursionFindSum(arr, i++);
	}
	else
	{
		Max = result;
	}
	cout << "" << endl;
	system("pause");
    return 0;
}

