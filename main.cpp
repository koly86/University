#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <iostream>

bool checkForTwoDigits(const uint16_t value)
{
	uint8_t dat[4];
	dat[0] = (value >> 12) & 0xf;
	dat[1] = (value >> 8) & 0xf;
	dat[2] = (value >> 4) & 0xf;
	dat[3] = (value) & 0xf;

	int counter = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (dat[i] < 10)
			++counter;
	}

	return counter < 3;
}

int main()
{
	constexpr uint32_t arraySize = 35000;
	constexpr uint16_t maxValue = 10000;

	// Init test data
	unsigned short testArray[arraySize];
	for (auto i = 0; i < arraySize; ++i)
	{
		testArray[i] = (rand() % static_cast<int>(maxValue + 1));
	}
	
	uint16_t minVal = UINT16_MAX;

	const auto start = std::chrono::steady_clock::now();

	for (auto i = 0; i < arraySize; ++i)
	{
		if (testArray[i] < minVal)
		{
			if (checkForTwoDigits(testArray[i]))
			{
				minVal = testArray[i];
			}
		}
	}

	const auto end = std::chrono::steady_clock::now();
	const auto diff = end - start;

	std::cout << "Spent "<< std::chrono::duration<double, std::milli>(diff).count() << " ms." << std::endl;

	if (minVal != UINT16_MAX)
		std::cout << "Minimal value = " << minVal << "." << std::endl;
	else
		std::cout << "There is no solution." << std::endl;

	system("pause");

	return 0;
}