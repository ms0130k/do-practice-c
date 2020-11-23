//#include <stdio.h>
//
//int main(void) {
//	int nData = 10;
//	char cData = 'B';
//	int cData_ = (int)cData;
//	int nData_ = cData + 500;
//
//	printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
//	printf("%d, %d\n", sizeof('A'), sizeof(char));
//	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));
//
//	printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData));//피연산자로 기술한 연산식 자체를 아예 실행하지 않는다
//	++nData;
//	printf("%d\n", nData);
//
//	return 0;
//}
//
////sizeof 연산자는 프로그램을 빌드하고 CPUT가 실행하는 런타임 연산자가 아니라 컴파일러가 컴파일 타임에 수행하는 연산자
////따라서 아무리 많이 사용하더라도 프로그램의 수행능력이 떨어지는 일은 없다. 많이 사용할수록 좋은 연산자
////sizeof 연산자의 피연산자는 자료형