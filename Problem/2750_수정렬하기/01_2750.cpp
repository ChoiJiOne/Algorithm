#include <iostream>
using namespace std;

const int MAX = 1000;
int arr[MAX], n;

/*
 * 버블 정렬 알고리즘
 */
void BubbleSort(void)
{
	for(int i = n - 1; i > 0; --i)
	{
		for(int j = 0; j < i; ++j)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);

	cin >> n;
	
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
		
	BubbleSort();
	
	for(int i = 0; i < n; ++i)
		std::cout << arr[i] << '\n';
	
	return 0;
}
