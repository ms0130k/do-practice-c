#include <stdio.h>

int main(void) {
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0;
	int x = 5, y = 0, nDirection = -1;

	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < (5 - i) * 2 - 1; ++j)
		{
			if (i % 2 == 0)
			{
				if (((5 - i) * 2 - 1) / 2 >= j) nDirection = -1;
				else nDirection = 1;
			}
			else
			{
				if (((5 - i) * 2 - 1) / 2 >= j) nDirection = 1;
				else nDirection = -1;
			}

			if (((5 - i) * 2 - 1) / 2 >= j) x += nDirection;
			else y += nDirection;
			aList[y][x] = ++nCounter;

		}
	}


	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	return 0;
}