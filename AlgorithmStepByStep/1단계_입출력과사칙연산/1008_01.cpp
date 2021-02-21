#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.precision(10);

	int A, B;

	cin >> A >> B;
	cout << static_cast<double>(A) / static_cast<double>(B) << '\n';

	return 0;
}