#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	int T, A, B;

	cin >> T;

	for (int t = 0; t < T; ++t) 
	{
		cin >> A >> B;
		cout << A + B << '\n';
	}

	return 0;
}