//#include <stdio.h>
//
//int Add(int a, int b)
//{
//	int nData = 0;
//	nData = a + b;
//
//	return nData;
//}
//
//int main(void)
//{
//	//호출하는 함수를 호출자(caller), 호출되는 함수를 피호출자(callee)라고 합니다.
//	//모든 호출자 함수는 피호출자 함수 매개변수의 초깃값을 '실인수'로 명시할 의무가 있다.
//	//매개변수는 말 그대로 변수, 피호출자 함수 내부에 선언된 지역변수, 그러므로 같은 이름을 가진 변수가 함수 몸체 스코프 안에 공존할 수 없다.
//	int nResult = 0;
//	nResult = Add(3, 4);
//	printf("Result: %d\n", nResult);
//	return 0;
//}