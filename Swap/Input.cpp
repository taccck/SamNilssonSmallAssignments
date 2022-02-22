#include "Input.h"

bool IntParse(std::string value, int& intValue)
{
	int tempValue = 0;
	for (int i = value.length() - 1; i >= 0; i--)
	{
		int number = ((int)value.at(i)) - 48;

		if (i == 0 && value.at(0) == '-')
		{
			tempValue *= -1;
			continue;
		}

		if (number < 0 || number > 9)
		{
			return false;
		}

		int decimal = value.length() - i;
		tempValue += number * (pow(10, decimal));
	}

	intValue = tempValue / 10;
	return true;
}

int IntInput(std::string message, std::string errorMessage)
{
	std::string input;
	int intInput;
	bool keepTrying = true;
	while (keepTrying)
	{
		std::cout << message << std::endl;
		std::cin >> input;
		keepTrying = !IntParse(input, intInput);
		if (keepTrying)
		{
			system("CLS");
			std::cout << errorMessage << std::endl;
		}
	}
	std::cout << std::endl;

	return intInput;
}