#include <iostream>
#include <cstddef>
#include "Tablica.h"

int main(void)
{
	Tablica<int, 10> A;

	for (int i = 0; i<10; ++i)
	{
		A[i] = 100 + i;
	}

	for (int i = 0; i<10; ++i)
	{
		std::cout << "A[" << i << "]=" << A[i] << std::endl;
	}
	return 0;
}