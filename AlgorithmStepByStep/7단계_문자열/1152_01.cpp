#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	string input;
	getline(cin, input);
	
	int countOfWord = 0;

	for (size_t i = 0; i < input.size(); ++i)
	{
		if (input[i] == ' ')
		{
			if (i == 0 || i == input.size() - 1)
				continue;
			else
				countOfWord++;
		}
	}

	if (input == " ")
		cout << 0 << '\n';
	else
		cout << countOfWord + 1 << '\n';

	return 0;
}