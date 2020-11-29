//#include <stdio.h>
//
//void main() {
//	int nFee = 1000, nAge = 0;
//	double nRate = 0.0;
//	printf("나이를 입력하세요: ");
//	scanf_s("%d", &nAge);
//
//	if (nAge < 14)
//	{
//		if (nAge < 4) nRate = 0.0;
//		else nRate = 0.5;
//	}
//	else
//	{
//		if (nAge < 20) nRate = 0.75;
//		else nRate = 1.0;
//	}
//	printf("요금은 %d원 입니다.", (int)(nFee * nRate));
//
//	return;
//}