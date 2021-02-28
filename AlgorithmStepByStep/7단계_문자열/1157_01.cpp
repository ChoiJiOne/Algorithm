#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool Compare(const pair<char, int>& p0, const pair<char, int>& p1)
{
	if (p0.second < p1.second)
		return true;
	else
		return false;
}

int main(void)
{
	ios_base::sync_with_stdio(false);

	string input;
	cin >> input;

	vector<pair<char, int>> countOfAlphabet;

	for (int i = 0; i < 26; ++i)
	{
		pair<char, int> p(static_cast<char>(i + 65), 0);
		countOfAlphabet.push_back(p);
	}

	for (size_t i = 0; i < input.size(); ++i)
	{
		char ch = input[i];
		int index = (65 <= ch && ch <= 90) ? ch - 65 : ch - 97;
		countOfAlphabet[index].second++;
	}

	sort(countOfAlphabet.begin(), countOfAlphabet.end(), Compare);
	size_t length = countOfAlphabet.size();

	if (length == 1)
	{
		cout << countOfAlphabet[0].first << '\n';
	}
	else
	{
		if (countOfAlphabet[length - 1].second == countOfAlphabet[length - 2].second)
			cout << '?' << '\n';
		else
			cout << countOfAlphabet[length - 1].first << '\n';
	}


	return 0;
}