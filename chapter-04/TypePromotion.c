//#include <stdio.h>
//
//int main(void)
//{
//	char ch = 'A';
//
//	printf("%c\n", ch);
//
//	printf("%c\n", ch + 1);
//	printf("%c\n", 'A' + 2);
//
//	printf("%d\n", 5.0 + 2);
//	printf("%f\n", 5.0 + 2);
//	printf("%lf\n", 5.0 + 2);
//
//	return 0;
//}
////임시결과의 자료형은 연산에 참여한 피연산자 중 정보 표현범위가 더 넓은 자료형이 됩니다.
////연산의 결과가 피연산자의 자료형보다 표현범위가 넓은 형식으로 변경되는 현상을 형승격(type promotion)이라고 합니다.
////특히 char형과 int형의 연산처럼 정수형 간의 형승격은 별도로 'integral promotion'이라고도 합니다.