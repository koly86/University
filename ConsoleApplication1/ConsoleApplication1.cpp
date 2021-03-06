// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;



struct Pair
{
	unsigned int val[2];
};

const unsigned int dataSize = 6;
static Pair data[dataSize] =
{
{ 2,  0 },
{ 0,  0 },
{ 0,  0 },
{ 0,  2 },
{ 0,  2 },
{ 2,  0 }
};

int main()
{
	unsigned int sum = 0;
	unsigned int arr[dataSize];
	unsigned int minDifference = UINT32_MAX;
	for (unsigned int i = 0; i < dataSize; ++i)
	{
		const auto& cell = data[i]; //автоопределение типа возвращаемого значения var
		const auto indexForSum = (cell.val[0] > cell.val[1]) ? 0 : 1;
		arr[i] = cell.val[indexForSum];
		sum += cell.val[indexForSum];
		cout << " " << cell.val[0] << "  " << cell.val[1] << endl;
		

		if (cell.val[0] != cell.val[1])
		{
			const auto cellDiff = cell.val[indexForSum] - cell.val[1 - indexForSum];
			
			if ((cellDiff % 3 != 0) && minDifference > cellDiff)
			{
				
				minDifference = cellDiff;
			}
		}
	}
	bool minDfr;
	if (sum % 3 == 0)
	{
		if (minDifference != 0 && minDifference < UINT32_MAX)
		{
			minDfr = true;
			sum -= minDifference;
		}
		else
		{
			cout << " No any result " << 0 << endl;
			system("pause");
			return 0;
		}
	}
	cout << "  " << endl;
	if (minDfr == true)
	{
		cout << "(";
	}
	for (unsigned int i = 0; i < dataSize; ++i)
	{	
		cout << " " << arr[i] << " + ";		
	}
	if (minDfr != true)
	cout << " = " << sum << endl;
	else
	{
		cout << ") - "<< minDifference << " = " << sum << endl;
	}
	cout << "  " << endl;
	cout << "Answer =" << sum << endl;	
	system("pause");

	return -1;
}