#include <iostream>
#include "RandomVector.h"
#include "Sorting.h"

int main(void)
{
	std::vector<int> v = CreateRandomVector(30, 0, 100);

	std::cout << "���� ��\n";
	PrintVector(v, ' ');

	BubbleSort(v);

	std::cout << "���� ��\n";
	PrintVector(v, ' ');

	return 0;
}