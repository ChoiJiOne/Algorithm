#include <iostream>
using namespace std;

const int MAX = 1000;
int score[MAX], N, maxScore = -1;
float newScore[MAX];
float totalScore;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.precision(4);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> score[i];

		if (maxScore < score[i])
			maxScore = score[i];
	}

	for (int i = 0; i < N; ++i)
	{
		newScore[i] = 100.0f * static_cast<float>(score[i]) / static_cast<float>(maxScore);
		totalScore += newScore[i];
	}

	cout << totalScore / static_cast<float>(N) << '\n';
	
	return 0;
}