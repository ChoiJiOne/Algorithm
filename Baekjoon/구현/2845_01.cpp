#include <iostream>
using namespace std;

int main(void)
{
	int person, area, total;
	int paper[5];

	cin >> person >> area;
	total = person * area;

	for (int i = 0; i < 5; ++i)
		cin >> paper[i];

	for (int i = 0; i < 5; ++i)
		std::cout << paper[i] - total << ' ';

	return 0;
}