#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	int H, M;
	cin >> H >> M;

	if (H > 0)
	{
		if (M >= 45)
			cout << H << ' ' << M - 45 << '\n';
		else
			cout << (H - 1) << ' ' << (60 + M - 45) << '\n';
	}
	else // H == 0
	{
		if (M >= 45)
			cout << H << ' ' << M - 45 << '\n';
		else
			cout << 23 << ' ' << (60 + M - 45) << '\n';
	}

	return 0;
}