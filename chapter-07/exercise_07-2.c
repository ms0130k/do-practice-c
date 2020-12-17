//#include <stdio.h>
//
//int main(void)
//{
//	int i = 0, j = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5 + i; j++)
//		{
//			if (i + j < 4)
//			{
//				putchar('\t');
//			}
//			else
//			{
//				if (i % 2 == 0 && j % 2 != 0) printf("\t");
//				else if (i % 2 != 0 && j % 2 == 0) printf("\t");
//				else printf("*\t");
//			}
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}