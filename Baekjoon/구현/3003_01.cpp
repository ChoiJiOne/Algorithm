#include <iostream>
using namespace std;

const int COUNT_OF_CHESS = 6;
const int CHESS[COUNT_OF_CHESS] = {1, 1, 2, 2, 2, 8};
int chess[COUNT_OF_CHESS];

int main(void)
{
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < COUNT_OF_CHESS; ++i)
		cin >> chess[i];
	
	for (int i = 0; i < COUNT_OF_CHESS; ++i)
		cout << CHESS[i] - chess[i] << ' ';

	return 0;
}

