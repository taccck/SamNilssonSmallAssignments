#include <iostream>
#include "Fibonacchi.h"

int main()
{
	int input;
	std::cin >> input;

	std::vector<int> fibIt;
	fibIt = FibonacciIterative(input);
	std::cout << "Iterative: ";
	for (int n : fibIt)
	{
		std::cout << n << ", ";
	}
	std::cout << std::endl;
	fibIt.clear();
	fibIt.shrink_to_fit();

	std::vector<int> fibRec;
	fibRec = FibonacciRecurrsion(input, fibRec);
	std::cout << "Recurrsion: ";
	for (int n : fibRec)
	{
		std::cout << n << ", ";
	}
	std::cout << std::endl << std::endl;
	fibRec.clear();
	fibRec.shrink_to_fit();

	return 0;
}