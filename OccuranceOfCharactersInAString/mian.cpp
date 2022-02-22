#include "OccuranceInString.h"

int main()
{
	std::vector<std::tuple<char, int>> occurance = OccuranceOfChar("tacocat");

	for (std::tuple<char, int> n : occurance)
	{
		std::cout << std::get<0>(n) << " : " << std::get<1>(n) << std::endl;
	}

	return 0;
}