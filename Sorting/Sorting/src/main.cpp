#include <iostream>
#include "RandomVector.h"
#include "Sorting.h"

int main(void)
{
	std::vector<int> v = CreateRandomVector(30, 0, 100);

	std::cout << "정렬 전\n";
	PrintVector(v, ' ');

	BubbleSort(v);

	std::cout << "정렬 후\n";
	PrintVector(v, ' ');

	return 0;
}