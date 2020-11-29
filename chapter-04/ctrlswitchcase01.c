//#include <stdio.h>
//
//int main(void)
//{
//	/*
//	scanf() 함수의 형식 문자열을 이루고 있는 각 형식 문자들이 빈 공백 없이 붙어있다.
//	이 때문에 예제를 실행하고 "정수 기호 정수" 형태로 값을 입력하되
//	'반드시 모두 붙여서 입력'
//	해야 합니다. "%d%d"처럼 같은 형식이 연속하면 공백문자나 탭키 혹은 개행문자로 구별해야 합니다.
//	그러나 반대로 연접한 형식이 계속 달라지면 모두 붙여서 입력해야 합니다.
//	*/
//
//	char cOperator = 0;
//	int x = 0, y = 0, nResult = 0;
//
//	scanf_s("%d", &x);
//	scanf_s("%c", &cOperator);
//	scanf_s("%d", &y);
//
//	switch (cOperator)
//	{
//	case '+':
//		nResult = x + y;
//		//break;
//	case '-':
//		nResult = x - y;
//		break;
//	case '*':
//		nResult = x * y;
//		break;
//	case '/':
//		nResult = x / y;
//		break;
//	default:
//		puts("ERROR: 알 수 없는 산술 연산자입니다.");
//	}
//
//	printf("Result: %d\n", nResult);
//	return 0;
//}