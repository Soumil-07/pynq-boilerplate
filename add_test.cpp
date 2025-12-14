#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdint>

#include "add.h"

const int NUM_TEST = 100;

int main()
{
	std::ifstream f("testgen/test_vectors.txt");
	if (!f.is_open())
	{
		std::cerr << "Tests failed: test vector file does not exist\n";
		return EXIT_FAILURE;
	}

	ITYPE x, y;
	OTYPE out, expected;
	uint32_t failures = 0;

	for (int i = 0; i < NUM_TEST; i++)
	{
		f >> x >> y >> expected;	
		add(x, y, out);
		if (out != expected)
		{
			std::cerr << "Test failed: expected " << expected << " got " << out << std::endl;
			failures++;
		}
	}

	std::cout << "Total failures: " << failures << " / " << NUM_TEST << std::endl;
}
