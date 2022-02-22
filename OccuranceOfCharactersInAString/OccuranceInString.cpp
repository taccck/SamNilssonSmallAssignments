#include "OccuranceInString.h"

int FindIndex(std::vector<std::tuple<char, int>> set, char& findMe)
{
	int index = 0;
	for (std::tuple<char, int> n : set)
	{
		if (std::get<0>(n) == findMe)
		{
			return index;
		}
		index++;
	}

	return -1;
}

std::vector<std::tuple<char, int>> OccuranceOfChar(std::string value)
{
	std::vector<std::tuple<char, int>> occurance;
	for (size_t i = 0; i < value.length(); i++)
	{
		int indexInOccurance = FindIndex(occurance, value[i]);
		if (indexInOccurance == -1)
		{
			occurance.push_back(std::make_tuple(value[i], 1));
			continue;
		}
		std::get<1>(occurance[indexInOccurance])++;
	}

	return occurance;
}