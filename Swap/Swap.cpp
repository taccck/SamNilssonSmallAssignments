#include <iostream>
#include <algorithm>

void ReferenceSwap(int& a, int& b)
{
	a = a * b;
	b = a / b;
	a /= b;
}

void PointerSwap(int* a, int* b)
{
	*a = *a * *b;
	*b = *a / *b;
	*a /= *b;
}

void StlSwap(int& a, int& b)
{
	std::swap(a, b);
}

int Mul(int a, int b) {
	int prodct{ 0 };
	while (b > 0) 
	{
		if (b & 1) 
		{
			prodct += a;
		}
		a = a << 1;
		b = b >> 1;
	}
	return prodct;
}

int Add(int a, int b)
{
	while (b != 0)
	{
		int carry = a & b;
		a = a ^ b;
		b = carry << 1;
	}
	return a;
}

int Subtract(int a, int b)
{
	b = Mul(-1, b);
	return Add(a, b);
}

void BitwiseSwap(int& a, int& b)
{
	a = Add(a, b);
	b = Subtract(a, b);
	a = Subtract(a, b);
}

void PrintReferenceSwap(int& a, int& b)
{
	std::cout << "Before reference swap: a=" << a << ", b=" << b << std::endl;
	ReferenceSwap(a, b);
	std::cout << "After reference swap: a=" << a << ", b=" << b << std::endl << std::endl;
}

void PrintPointerSwap(int& a, int& b)
{
	std::cout << "Before pointer swap: a=" << a << ", b=" << b << std::endl;
	PointerSwap(&a, &b);
	std::cout << "After pointer swap: a=" << a << ", b=" << b << std::endl << std::endl;
}

void PrintStlSwap(int& a, int& b)
{
	std::cout << "Before stl swap: a=" << a << ", b=" << b << std::endl;
	StlSwap(a, b);
	std::cout << "After stl swap: a=" << a << ", b=" << b << std::endl << std::endl;
}

void PrintBitwiseSwap(int& a, int& b)
{
	std::cout << "Before bitwise swap: a=" << a << ", b=" << b << std::endl;
	BitwiseSwap(a, b);
	std::cout << "After bitwise swap: a=" << a << ", b=" << b << std::endl << std::endl;
}