#include <iostream>

template <typename T> 
void TemplateSwap(T& a, T& b)
{
	a = a * b;
	b = a / b;
	a /= b;
}

template <typename T> 
void PrintTemplateSwap(T& a, T& b)
{
	std::cout << "Before template swap: a=" << a << ", b=" << b << std::endl;
	TemplateSwap(a, b);
	std::cout << "After template swap: a=" << a << ", b=" << b << std::endl << std::endl;
}