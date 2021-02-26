#include <iostream>
using namespace std;

const int MAX = 42;
int remainders[MAX];
int counts;

int main(void)
{
	ios_base::sync_with_stdio(false);

	int input;

	for (int i = 0; i < 10; ++i)
	{
		cin >> input;
		remainders[input % MAX]++;
	}

	for (int i = 0; i < MAX; ++i)
		if (remainders[i] != 0)
			counts++;

	cout << counts << '\n';

	return 0;
}