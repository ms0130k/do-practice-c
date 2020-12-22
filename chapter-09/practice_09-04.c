//#include <stdio.h>
//
//int main(void)
//{
//	int aList[5][12] = { 0 };
//	int i = 0, j = 0, y = 0, x = -1, nCounter = 0, nDirection = 1;
//
//	for (i = 16; i > 0; i -= 2)
//	{
//		for (j = 0; j < i; ++j)
//		{
//			if ((i + 8) / 2 > j) x += nDirection;
//			else y += nDirection;
//			aList[y][x] = ++nCounter;
//			if (nCounter >= 60) break;
//		}
//		if (nCounter >= 60) break;
//		nDirection = -nDirection;
//	}
//
//	/*for (j = 0; j < 12; ++j)
//	{
//		x += nDirection;
//		aList[y][x] = ++nCounter;
//	}
//	for (i = 0; i < 4; ++i)
//	{
//		y += nDirection;
//		aList[y][x] = ++nCounter;
//	}
//	nDirection = -nDirection;*/
//	
//	for (i = 0; i < 5; ++i)
//	{
//		for (j = 0; j < 12; ++j)
//			printf("%d\t", aList[i][j]);
//		putchar('\n');
//	}
//	return 0;
//}