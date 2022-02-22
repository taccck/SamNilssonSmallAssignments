#include "LinearSearchWord.h"

bool LinearSearchWord(std::string sentence, std::string lookFor)
{
	size_t sentenchLength = sentence.length();
	size_t lookForLength = lookFor.length();

	for (size_t sentenceIndex = 0; sentenceIndex < sentenchLength; sentenceIndex++)
	{
		if (sentence[sentenceIndex] == lookFor[0]) 
		{
			for (size_t lookForIndex = 1; lookForIndex <= lookForLength; lookForIndex++)
			{
				if (lookForIndex == lookForLength) { return true; }
				if (sentenceIndex + lookForIndex >= sentenchLength) { return false; }
				if (sentence[sentenceIndex + lookForIndex] != lookFor[lookForIndex]) { break; }
			}
		}
	}

	return false;
}