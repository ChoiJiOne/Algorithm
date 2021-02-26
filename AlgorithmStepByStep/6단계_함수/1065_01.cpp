#include <iostream>
using namespace std;

bool ArithmeticProgression(int n)
{
	if (n < 100) return true;

	int diff = (n / 10) % 10 - (n % 10);

	while (n >= 10)
	{
		int getDiff = (n / 10) % 10 - n % 10;
		n /= 10;

		if (getDiff == diff)
			continue;
		else
			return false;
	}

	return true;
}

int main(void)
{
	ios_base::sync_with_stdio(false);

	int N, count = 0;
	cin >> N;

	for (int i = 1; i <= N; ++i)
		if (ArithmeticProgression(i))
			count++;

	cout << count << '\n';

	return 0;
}