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
//static Pair data[dataSize] =
//{
// {00,  01},
// {10,  11},
// {20,  21},
// {30,  31},
// {40,  41},
// {50,  51}
//};

//static Pair data[dataSize] =
//{
// {30,  31},
// {40,  41},
// {50,  51},
// {00,  01},
// {10,  11},
// {20,  21}
//};

//static Pair data[dataSize] =
//{
// {3,  3},
// {4,  4},
// {5,  5},
// {0,  0},
// {1,  1},
// {2,  2}
//};

static Pair data[dataSize] =
{
	{ 5,  5 },
{ 21,  7 },
{ 5,  9 },
{ 52,  12 },
{ 1,  15 },
{ 2,  18 }
};

int main()
{
	unsigned int sum = 0;
	unsigned int minDifference = UINT32_MAX;
	for (unsigned int i = 0; i < dataSize; ++i)
	{
		const auto& cell = data[i];

		const auto indexForSum = (cell.val[0] > cell.val[1]) ? 0 : 1;
		sum += cell.val[indexForSum];

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

	cout << sum << endl;	
	system("pause");

	return -1;
}

//
//
//
//
//
//
//
//
//
//
////int i = 0; // инициализация глобальной переменной для подсчёта кол-ва рекурсивных вызовов
////int Max = 0;  // глобальная переменная для хранения возвращаемого результата рекурсивной функцией
////
////int RecursionFindSum(int ar[6][2], int i)
////{
////	int count = 0;
////	for ( int c=0 ; c < 6; c++)
////	{
////		count += ar[i][0];
////	}
////	if (count % 3 != 0)
////		return count;
////	else
////	{
////		return 0;
////	}	
////}
//constexpr unsigned int dataSize = 6;
//struct Pair
//{
//	unsigned int val[2];
//};
//
//static Pair data[dataSize]
//=
//{
//	{ 3,  5 },
//{ 21,  7 },
//{ 5,  9 },
//{ 52,  12 },
//{ 1,  15 },
//{ 2,  18 }
//};
//
// int main()
//
// {
//
//
//	 unsigned int sum = 0;
//	 unsigned int minDifference = UINT32_MAX;
//	 for (unsigned int i = 0; i < dataSize; ++i)
//	 {
//		 const auto& cell = data[i];
//
//		 const auto indexForSum = (cell.val[0] > cell.val[1]) ? 0 : 1;
//		 sum += cell.val[indexForSum];
//
//		 if (cell.val[0] != cell.val[1])
//		 {
//			 const auto cellDiff = cell.val[indexForSum] - cell.val[1 - indexForSum];
//
//			 if ((cellDiff % 3 != 0) && minDifference > cellDiff)
//				 minDifference = cellDiff;
//		 }
//	 }
//
//	 if (sum % 3 == 0)
//	 {
//		 if (minDifference != 0 && minDifference < UINT32_MAX)
//			 sum -= minDifference;
//		 else
//		 {
//			 // There is no solution
//		 }
//	 }
// }
//	
//	
//	/*
//	int arr[6][2] = {	{00,  01}, 
//						{10,  11}, 
//						{20,  21}, 
//						{30,  31},
//						{40,  41},
//						{50,  51} };
//	
//	for (int i = 0; i < size(arr); i++)
//	{
//		cout << "" << endl;
//		for (int j = 0; j < size(arr[i]); j++)
//		{
//			cout << arr[i][j] << "  ";
//		}
//	}	
//	cout << "" << endl;
//	cout << RecursionFindSum(arr, 0) << endl;
//	
//	cout << "" << endl;
//	system("pause");
//    return 0;*/
//
//
//