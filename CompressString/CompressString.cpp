#include "CompressString.h"
#include <string>

std::string Compress(std::string uncompressed)
{
	char currChar{ uncompressed[0] };
	int repetition{ 1 };
	std::string compressed{ "" };

	for (size_t i = 1; i < uncompressed.size(); i++)
	{
		if (uncompressed[i] != currChar || repetition == 9)
		{
			std::string compress = currChar + std::to_string(repetition);
			compressed += compress;

			currChar = uncompressed[i];
			repetition = 0;
		}
		repetition++;
	}

	std::string compress = currChar + std::to_string(repetition);
	compressed += compress;
	return compressed;
}

std::string Decompress(std::string compressed)
{
	std::string decompressed{ "" };
	for (size_t compressedIndex = 1; compressedIndex < compressed.size(); compressedIndex += 2)
	{
		for (size_t i = 0; i < ((int)compressed.at(compressedIndex)) - 48; i++)
		{
			decompressed += compressed.at(compressedIndex - 1);
		}
	}
	return decompressed;
}