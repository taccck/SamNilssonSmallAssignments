#include "Swap.h"
#include "Input.h"

int main()
{
	int a = IntInput("input a number", "pls gib number");
	int b = IntInput("more", "pls gib number!!");

	PrintReferenceSwap(a, b);
	PrintPointerSwap(a, b);
	PrintStlSwap(a, b);
	PrintBitwiseSwap(a, b);
	PrintTemplateSwap<int>(a, b);

	return 0;
}