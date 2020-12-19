//#include <stdio.h>
//
//int main(void)
//{
//	int aList[5] = { 50, 40, 30, 20, 10 };
//	int i = 0, j = 0, nTmp = 0;
//
//	/*for (i = 0; i < 4; ++i)
//	{
//		if (aList[i] > aList[i + 1])
//		{
//			nTmp = aList[i];
//			aList[i] = aList[i + 1];
//			aList[i + 1] = nTmp;
//		}
//	}
//
//	for (i = 0; i < 3; ++i)
//	{
//		if (aList[i] > aList[i + 1])
//		{
//			nTmp = aList[i];
//			aList[i] = aList[i + 1];
//			aList[i + 1] = nTmp;
//		}
//	}
//
//	for (i = 0; i < 2; ++i)
//	{
//		if (aList[i] > aList[i + 1])
//		{
//			nTmp = aList[i];
//			aList[i] = aList[i + 1];
//			aList[i + 1] = nTmp;
//		}
//	}*/
//
//	for (i = 4; i > 0; --i)
//	{
//		for (j = 0; j < i; ++j)
//		{
//			if (aList[j] > aList[j + 1])
//			{
//				nTmp = aList[j];
//				aList[j] = aList[j + 1];
//				aList[j + 1] = nTmp;
//			}
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//		printf("%d\t", aList[i]);
//	putchar('\n');
//	return 0;
//}