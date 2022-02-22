#include "CompressString.h"
#include "Input.h"

int main()
{
	std::string value = Input("Give a string to compress", "use between 1 and 100 characters", 1 , 100);

	value = Compress(value);
	std::cout << "Compressed: " << value << std::endl;

	value = Decompress(value);
	std::cout << "Decompressed: " << value << std::endl;

	return 0;
}