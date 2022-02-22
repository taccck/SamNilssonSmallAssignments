#include "Bag.h"
#include "Input.h"

int main()
{
	Bag<int>* intBag = new Bag<int>();

	bool keepLooping = true;
	while (keepLooping)
	{
		int state = IntInput("1: Push   2: Pop   3: Check Size   4: Quit",
			"Input a number between 1 and 4", 1, 4);
		int input{};
		int popped{};

		switch (state)
		{
		case 1:
			input = IntInput("Give a number to add to the bag",
				"Give a number between -100000000 and 100000000", -100000000, 100000000);
			intBag->push_back(input);
			PressToContinue();
			break;

		case 2:
			popped = intBag->pop_back();
			std::cout << "Popped " << popped << std::endl;
			PressToContinue();
			break;

		case 3:
			std::cout << "Bag has a size of " << intBag->size() << " integers" << std::endl;
			PressToContinue();
			break;

		case 4:
			keepLooping = false;
			std::cout << "Goodbye";
			break;
		}
	}

	delete intBag;
	return 0;
}