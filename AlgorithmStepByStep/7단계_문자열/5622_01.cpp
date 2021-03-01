#include <iostream>
#include <string>
using namespace std;

const int alphabet[26] = {
	3, 3, 3,
	4, 4, 4,
	5, 5, 5,
	6, 6, 6,
	7, 7, 7,
	8, 8, 8, 8,
	9, 9, 9,
	10, 10, 10, 10
};

int main(void)
{
	ios_base::sync_with_stdio(false);

	string input;
	int minimumTime = 0;
	cin >> input;

	for (size_t i = 0; i < input.size(); ++i)
	{
		char ch = input[i] - 65;
		minimumTime += alphabet[ch];
	}

	cout << minimumTime << '\n';

	return 0;
}