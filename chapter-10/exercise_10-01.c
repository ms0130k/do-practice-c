//#include <stdio.h>
//
//int GetNum(void);
//int GetMin(int, int, int, int);
//
//int main(void)
//{
//	int i = 0, a = 0, b = 0, c = 0, d = 0;
//	
//	a = GetNum();
//	b = GetNum();
//	c = GetNum();
//	d = GetNum();
//
//	printf("%d, %d, %d, %d �߿� ���� ���� ���� %d�Դϴ�.", a, b, c, d, GetMin(a, b, c, d));
//
//	return 0;
//}
//
//int GetNum(void)
//{
//	int nInput = 0;
//	printf("������ �Է��ϼ���.: ");
//	scanf_s("%d", &nInput);
//	return nInput;
//}
//
//int GetMin(int a, int b, int c, int d)
//{
//	int nMin = a;
//	if (a > b) nMin = b;
//	if (b > c) nMin = c;
//	if (c > d) nMin = d;
//	return nMin;
//}