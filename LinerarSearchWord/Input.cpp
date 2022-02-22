#include "Input.h"

std::string Input(std::string message, std::string errorMessage, int min, int max)
{
	std::string input{};
	bool keepTrying = true;
	while (keepTrying)
	{
		std::cout << message << std::endl;
		std::cin >> input;
		keepTrying = input.length() > max || input.length() < min;
		if (keepTrying)
		{
			std::system("CLS");
			std::cout << errorMessage << std::endl;
		}
	}

	std::cout << std::endl;

	return input;
}