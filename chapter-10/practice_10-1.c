//#include <stdio.h>
//
//int GetData(void);
//int GetMax(int[]);
//
//int main(void)
//{
//	int aList[3] = { 0 };
//	int nMax = 0, i = 0;
//
//	for (i = 0; i < 3; ++i)
//		aList[i] = GetData();
//
//	nMax = GetMax(*aList);
//
//	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�.\n", aList[0], aList[1], aList[2], nMax);
//	return 0;
//}
//
//int GetData(void)
//{
//	int nInput = 0;
//	printf("������ �Է��ϼ���.: ");
//	scanf_s("%d", &nInput);
//	return nInput;
//}
//
//int GetMax(int num[])
//{
//	printf("sizeof: %d", sizeof(num));
//	int nMax = num[0], i = 0;
//	for (i = 1; i < sizeof(num) - 1; ++i)
//		if (num[i] > nMax) nMax = num[i];
//	return nMax;
//}