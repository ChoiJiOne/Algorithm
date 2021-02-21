#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);

	int num, circleNum, circle = 0;
	cin >> num;

	circleNum = num;

	do
	{
		int num10 = circleNum / 10;
		int num1  = circleNum % 10;
		circleNum = 10 * num1 + (num1 + num10) % 10;
		circle++;
	} while (circleNum != num);

	cout << circle << '\n';

	return 0;
}