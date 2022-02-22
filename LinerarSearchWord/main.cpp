#include "LinearSearchWord.h"
#include "Input.h"

int main()
{
	std::string sentence = Input("Write a sentence with no spaces", "Between 1 and 100 characters", 1, 100);
	std::string lookFor = Input("Write a word", "Between 1 and 100 characters", 1, 100);

	std::string contains = LinearSearchWord(sentence, lookFor) ? ", contains the word: " : ", doesn't contain the word: ";
	std::cout << sentence << contains << lookFor << std::endl;

	return 0;
}