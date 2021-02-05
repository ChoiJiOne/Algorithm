#include "Sorting.h"

void BubbleSort(std::vector<int>& v)
{
	for (size_t i = v.size() - 1; i > 0; --i)
	{
		for (size_t j = 0; j < i; ++j)
		{
			if (v[j] > v[j + 1])
			{
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
}