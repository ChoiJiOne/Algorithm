#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	int countOfSong, average;

	cin >> countOfSong >> average;

	if (average == 1)
		cout << 1 << '\n';
	else
		cout << (countOfSong * (average - 1) + 1) << '\n';

	return 0;
}