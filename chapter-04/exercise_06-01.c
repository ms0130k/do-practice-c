//#include <stdio.h>
//
//int main(void)
//{
///*
//정수 다섯개를 입력받아 그 중 가장 큰 수를 출력
//단, 사용자는 0~100 사이의 값만 입력하도록 강제
//만일 범위를 벗어난 숫자 입력시 0 미만은 0으로 100 초과는 100으로 조정
//*/
//
//	int nInput = 0, nMax = 0;
//
//	scanf_s("%d", &nInput);
//
//	if (nInput < 0)
//		nInput = 0;
//	else if (nInput > 100)
//		nInput = 100;
//	nMax = nInput;
//
//	scanf_s("%d", &nInput);
//
//	if (nInput < 0)
//		nInput = 0;
//	else if (nInput > 100)
//		nInput = 100;
//	if (nInput > nMax)
//		nMax = nInput;
//
//	scanf_s("%d", &nInput);
//
//	if (nInput < 0)
//		nInput = 0;
//	else if (nInput > 100)
//		nInput = 100;
//	if (nInput > nMax)
//		nMax = nInput;
//	scanf_s("%d", &nInput);
//
//	if (nInput < 0)
//		nInput = 0;
//	else if (nInput > 100)
//		nInput = 100;
//	if (nInput > nMax)
//		nMax = nInput;
//
//	scanf_s("%d", &nInput);
//
//	if (nInput < 0)
//		nInput = 0;
//	else if (nInput > 100)
//		nInput = 100;
//	if (nInput > nMax)
//		nMax = nInput;
//
//	printf("MAX: %d", nMax);
//	return 0;
//
//}
