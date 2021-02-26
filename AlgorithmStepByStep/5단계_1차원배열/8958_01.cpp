#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T-- > 0)
	{
		string input;
		int correct = 0;
		int total = 0;
		cin >> input;

		for (size_t i = 0; i < input.size(); ++i)
		{
			if (input[i] == 'O')
				correct++;
			else // input[i] == 'X'
				correct = 0;

			total += correct;
		}

		cout << total << '\n';
	}

	return 0;
}