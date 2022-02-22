#include "Fibonacchi.h"

std::vector<int> FibonacciIterative(int value)
{
	std::vector<int> fib;
	if (value <= 0) return fib;
	fib.push_back(0);
	if (value == 1) return fib;
	fib.push_back(1);
	for (size_t i = 2; i <= value; i++)
	{
		int newValue = fib[i - 2] + fib[i - 1];
		fib.push_back(newValue);
	}

	return fib;
}

std::vector<int> FibonacciRecurrsion(int& value, std::vector<int> fib)
{
	if (value < 0) return fib;

	int valueOne = 0;
	if (fib.size() > 0)
	{
		valueOne = fib[fib.size() - 1];
		if (valueOne == 0) valueOne = 1;
	}
	int valueTwo = 0;
	if (fib.size() > 1)
		valueTwo = fib[fib.size() - 2];
	
	fib.push_back(valueOne + valueTwo);
	value--;
	return FibonacciRecurrsion(value, fib);
}