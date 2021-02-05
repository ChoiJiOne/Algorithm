#include <iostream>
#include <random>
#include "RandomVector.h"

std::vector<int> CreateRandomVector(size_t vectorSize, int minimum, int maximum)
{
	if (minimum > maximum)
		std::swap(minimum, maximum);

	// 난수 생성을 위한 초기 설정
	std::random_device rd;
	std::mt19937 generator(rd());
	std::uniform_int_distribution<int> distribution(minimum, maximum);

	std::vector<int> vector;

	for (size_t i = 0; i < vectorSize; ++i)
	{
		vector.push_back(distribution(generator));
	}

	return vector;
}

void PrintVector(const std::vector<int>& vector, const char ch)
{
	std::cout << "print vector component : " << ch;
	for (std::vector<int>::size_type i = 0; i < vector.size(); ++i)
	{
		std::cout << vector[i] << ch;
	}

	std::cout << "\n\n";
}