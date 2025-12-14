#include <iostream>

#include "add.h"

int main()
{
	int in1 = 5, in2 = 3;
	int out;

	add(in1, in2, out);

	if (out != 8)
		std::cout << "Test failed!\n";
	else
		std::cout << "Test passed!\n";
}
