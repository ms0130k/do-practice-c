//#include <stdio.h>
//
//int GetNumber();
//int CorrectNumber(int);
//int GetFactorial(int);
//
//int main()
//{
//	printf("MAX: %d\n", GetFactorial(GetNumber()));
//	printf("MAX: %d\n", GetFactorial(GetNumber()));
//	printf("MAX: %d\n", GetFactorial(GetNumber()));
//	printf("MAX: %d\n", GetFactorial(GetNumber()));
//	return 0;
//}
//
//int GetNumber()
//{
//	int nInput = 0;
//	printf("1~10사이의 정수를 입력해주세요.: ");
//	scanf_s("%d", &nInput);
//	return CorrectNumber(nInput);
//}
//
//int CorrectNumber(int nNum)
//{
//	if (nNum < 1) nNum = 1;
//	if (nNum > 10) nNum = 10;
//	return nNum;
//}
//
//int GetFactorial(int nParam)
//{
//	int nResult = 1, i = 0;
//	for (i = 1; i <= nParam; ++i)
//		nResult *= i;
//
//	return nResult;
//}