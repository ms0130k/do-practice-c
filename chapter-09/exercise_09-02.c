#include <stdio.h>

int main(void) {
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0;
	int x = 5, y = 0, nDirection = 1;

	for (j = 0; j < 5; ++j)
	{
		for (i = 0; i < 5; ++i)
		{
			if (j % 2 == 0) aList[i][j] = ++nCounter;
			else aList[4 - i][j] = ++nCounter;
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