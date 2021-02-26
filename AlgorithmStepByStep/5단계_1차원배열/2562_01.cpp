#include <iostream>
using namespace std;

const int MAX = 9;
int arr[MAX], maxIndex = 0;

int main(void)
{
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < MAX; ++i)
		cin >> arr[i];

	for (int i = 0; i < MAX; ++i)
		if (arr[i] > arr[maxIndex])
			maxIndex = i;

	cout << arr[maxIndex] << '\n' << maxIndex + 1 << '\n';

	return 0;
}