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
//	printf("%d, %d, %d, %d 중에 가장 작은 수는 %d입니다.", a, b, c, d, GetMin(a, b, c, d));
//
//	return 0;
//}
//
//int GetNum(void)
//{
//	int nInput = 0;
//	printf("정수를 입력하세요.: ");
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