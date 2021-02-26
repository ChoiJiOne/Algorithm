#include <iostream>
using namespace std;

const int MAX = 1000000;
int arr[MAX], N;
int maxVal = -1000001;
int minVal = 1000001;

int main(void)
{
	ios_base::sync_with_stdio(false);

	cin >> N;

	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	for (int i = 0; i < N; ++i)
	{
		if (arr[i] > maxVal)
			maxVal = arr[i];
		if (arr[i] < minVal)
			minVal = arr[i];
	}

	cout << minVal << ' ' << maxVal << '\n';

	return 0;
}