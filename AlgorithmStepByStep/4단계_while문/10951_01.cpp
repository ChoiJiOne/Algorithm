#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	int A, B;

	while (true)
	{
		cin >> A >> B;

		if (cin.eof() == true)
			break;

		cout << A + B << '\n';
	}

	return 0;
}