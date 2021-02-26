#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	char ch;
	cin >> ch;

	cout << static_cast<int>(ch) << '\n';

	return 0;
}