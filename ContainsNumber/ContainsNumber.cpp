#include "ContainsNumber.h"

bool Contains(int data, int lookFor)
{
	size_t size = (int)log10(data) + 1;
	int* digits = new int[size];

	for (size_t i = 0; i < size; i++)
	{
		digits[i] = data % 10;
		data /= 10;
	}

	for (size_t i = 0; i < size; i++)
	{
		if (digits[i] == lookFor)
		{
			return true;
		}
	}

	return false;
}