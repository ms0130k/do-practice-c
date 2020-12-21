#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0;
	int x = -1, y = 0, nCounter = 0, nDirection = 1;

	for (i = 9; i > 0; i -= 2)
	{
		for (j = 0; j < i; ++j)
		{
			if (j <= i / 2) x += nDirection;
			else y += nDirection;
			aList[y][x] = ++nCounter;
		}
		nDirection = -nDirection;
	}
	
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	return 0;
}