#include <cstdio>

int main(void)
{
	int symbol = 0;
	int input;

	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &input);
		symbol += (input * input);
	}
	
	printf("%d\n", symbol % 10);

	return 0;
}