#include <iostream>
using namespace std;

const int MAX = 10;
int countOfNumber[MAX];
int A, B, C;

int main(void)
{
	ios_base::sync_with_stdio(false);

	cin >> A >> B >> C;

	int result = A * B * C;
	while (result > 0)
	{
		int num = result % 10;
		result /= 10;

		countOfNumber[num]++;
	}

	for (int i = 0; i < MAX; ++i)
		cout << countOfNumber[i] << '\n';

	return 0;
}
