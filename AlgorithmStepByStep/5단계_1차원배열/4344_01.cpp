#include <iostream>
using namespace std;

const int MAX = 1000;
int student[MAX], N, total, countOfStudent;
float average;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	int C;
	cin >> C;

	while (C-- > 0)
	{
		cin >> N;

		total = 0;
		countOfStudent = 0;

		for (int i = 0; i < N; ++i)
		{
			cin >> student[i];
			total += student[i];
		}

		average = static_cast<float>(total) / static_cast<float>(N);

		for (int i = 0; i < N; ++i)
			if (student[i] > average)
				countOfStudent++;

		cout << 100.0f * static_cast<float>(countOfStudent) / static_cast<float>(N) << "%\n";
	}

	return 0;
}