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

constexpr unsigned int dataSize = 6;
static Pair data[dataSize] =
{
	{ 5,  5 },
{ 21,  99 },
{ 5,  9 },
{ 52,  12 },
{ 1,  15 },
{ 2,  18 }
};

int main()
{
	unsigned int sum = 0;
	unsigned int arr[6];
	unsigned int minDifference = UINT32_MAX;
	for (unsigned int i = 0; i < dataSize; ++i)
	{
		const auto& cell = data[i]; //автоопределение типа возвращаемого значения var
		const auto indexForSum = (cell.val[0] > cell.val[1]) ? 0 : 1;
		arr[i] = cell.val[indexForSum];
		sum += cell.val[indexForSum];
		cout << cell.val[0] << "  " << cell.val[1] << endl;
		

		if (cell.val[0] != cell.val[1])
		{
			const auto cellDiff = cell.val[indexForSum] - cell.val[1 - indexForSum];

			if ((cellDiff % 3 != 0) && minDifference > cellDiff)
				minDifference = cellDiff;
		}
	}



	if (sum % 3 == 0)
	{
		if (minDifference != 0 && minDifference < UINT32_MAX)
			sum -= minDifference;
		else
		{
			// There is no solution
		}
	}

	for (unsigned int i = 0; i < dataSize; ++i)
	{
		cout << arr[i] << " + ";
	}
	cout << " = " << sum << endl;

	cout << "Answer =" << sum << endl;	
	system("pause");

	return -1;
}