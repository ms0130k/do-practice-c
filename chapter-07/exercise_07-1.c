#include <stdio.h>

int main(void)
{
	int count = 0, sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 4 == 0)
		{
			count++;
			sum += i;
		}
	}

	printf("개수: %d, 합계: %d", count, sum);
	return 0;
}