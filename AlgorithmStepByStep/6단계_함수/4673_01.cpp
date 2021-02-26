#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 10001;
bool isSelfNumber[MAX];

int SelfNumber(int n)
{
	int result = 0;
	int origin = n;

	while (n > 0)
	{
		result += n % 10;
		n /= 10;
	}

	return origin + result;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	memset(isSelfNumber, true, sizeof(bool) * MAX);


	for (int i = 1; i < MAX; ++i)
	{
		if (!isSelfNumber[i])
			continue;

		for (int number = SelfNumber(i); number < MAX; number = SelfNumber(number))
			isSelfNumber[number] = false;
	}

	for (int i = 1; i < MAX; ++i)
		if (isSelfNumber[i])
			cout << i << '\n';

	return 0;
}