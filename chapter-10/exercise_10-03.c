//#include <stdio.h>
//#include <stdlib.h>
//
//double g_aRate[4] = { 0, 0.5, 0.75, 1 };
//
//int GetAge();
//int CheckAge(int);
//int GetFee(int, int);
//void PrintResult(int, int);
//
//int main(void)
//{
//	int nFee = 1000, nAge = 0;
//	nAge = GetAge();
//	nFee = GetFee(nFee, nAge);
//	PrintResult(nFee, nAge);
//
//	return 0;
//}
//
//int GetAge()
//{
//	int nAge = 0;
//
//	do
//	{
//		system("cls");
//		printf("나이를 입력하세요.: ");
//		scanf_s("%d", &nAge);
//	} while (CheckAge(nAge));
//	return nAge;
//}
//
//int CheckAge(int nAge)
//{
//	if (nAge < 0)
//	{
//		printf("나이에 적합하지 않습니다.\n");
//		_getch();
//		return 1;
//	}
//	return 0;
//}
//
//int GetFee(int nFee, int nAge)
//{
//	int nType = 0;
//	if (nAge < 4) nType = 0;
//	else if (nAge < 14) nType = 1;
//	else if (nAge < 20) nType = 2;
//	else nType = 3;
//
//	return nFee * g_aRate[nType];
//}
//
//void PrintResult(int nFee, int nAge)
//{
//	printf("나이는 %d살이고, 요금은 %d원입니다.", nAge, nFee);
//}