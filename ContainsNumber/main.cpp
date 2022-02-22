#include <iostream>
#include "ContainsNumber.h"

int main()
{
	int data = 754879865;
	int lookFor = 0;
	std::string contains = Contains(data, lookFor) ? ", contains the number: " : ", doesn't contain the number: ";
	std::cout << data << contains << lookFor << std::endl;

	lookFor = 7;
	contains = Contains(data, lookFor) ? ", contains the number: " : ", doesn't contain the number: ";
	std::cout << data << contains << lookFor << std::endl;

	return 0;
}