#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	int T, count = 0;
	cin >> T;
	string input;

	while (T-- > 0)
	{
		cin >> count >> input;

		for (size_t i = 0; i < input.size(); ++i)
		{
			for (int c = 0; c < count; ++c)
				cout << input[i];
		}

		cout << '\n';
	}

	return 0;
}