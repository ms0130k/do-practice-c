//#include <stdio.h>
//
//int nInput = 100;
//
//void TestFunc(void)
//{
//	printf("TestFunc(): %d\n", nInput);
//}
//
//int main(void)
//{
//	int nInput = 0;
//	printf("%d\n", nInput);
//	{
//		int nInput = 20;
//		printf("%d\n", nInput);
//	}
//	TestFunc();
//	return 0;
//}
////1. 가장 최근에 형성된 블록 스코프에 속한 지역변수
////2. 현재 블록 스코프의 외부를 감싸고 있는 상위 스코프(최대 함수 몸체까지 검색)
////3. 파일 스코프(전역변수)