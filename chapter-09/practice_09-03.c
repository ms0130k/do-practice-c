//#include <stdio.h>
//
//int main(void)
//{
//	int aList[5] = { 30, 40, 10, 50, 20 };
//	int i = 0, j = 0, nMinIndex = 0, nTmp = 0;
//
//	for (i = 0; i < 4; ++i)
//	{
//		nMinIndex = i;
//		for (j = i; j < 4; ++j)
//			if (aList[nMinIndex] > aList[j + 1]) nMinIndex = j + 1;
//
//		if (nMinIndex != i)
//		{
//			nTmp = aList[i];
//			aList[i] = aList[nMinIndex];
//			aList[nMinIndex] = nTmp;
//		}
//	}
//
//	for (i = 0; i < 5; ++i)
//	{
//		printf("%d\t", aList[i]);
//	}
//	putchar('\n');
//	return 0;
//}