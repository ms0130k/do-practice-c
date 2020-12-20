#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0;
	int x = -1, y = -1, nCounter = 0;

	for (i = 0; i < 9; ++i)
	{
		if (i < 5) ++x;
		else ++y;
		aList[x][y] = ++nCounter;
	}
	
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	return 0;
}