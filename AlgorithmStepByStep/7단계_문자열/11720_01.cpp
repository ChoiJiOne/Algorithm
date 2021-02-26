#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	int N, sum = 0;
	char ch;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> ch;
		sum += (ch - 48);
	}

	cout << sum << '\n';

	return 0;
}