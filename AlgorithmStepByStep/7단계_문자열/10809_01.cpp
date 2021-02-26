#include <iostream>
#include <cstring>
#include <string>
using namespace std;

const int MAX = 26;
int alphabet[MAX];

int main(void)
{
	ios_base::sync_with_stdio(false);
	memset(alphabet, -1, sizeof(int) * MAX);

	string input;
	cin >> input;

	for (size_t i = 0; i < input.size(); ++i)
	{
		char ch = input[i] - 97;

		if (alphabet[ch] == -1)
			alphabet[ch] = i;
	}

	for (int i = 0; i < MAX; ++i)
		cout << alphabet[i] << ' ';

	return 0;
}