#include <iostream>
using namespace std;

const int MAX = 10000;
int seq[MAX];

int main(void)
{
	ios_base::sync_with_stdio(false);

	int N, X;
	cin >> N >> X;

	for (int i = 0; i < N; ++i)
		cin >> seq[i];

	for (int i = 0; i < N; ++i)
		if (seq[i] < X)
			cout << seq[i] << ' ';

	return 0;
}

