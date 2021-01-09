//#include <stdio.h>
//
////extern auto static register 외부 자동 정적 레지스터
////기억부류 자료형 변수명 = 초깃값;
////스코프 내부에서 변수 선언시 기억부류 지정자 생략하면 모두 auto처리
//int main(int argc, char* argv[])
//{
//	auto int aList[3] = { 10, 20, 30 };
//	auto int i = 0;
//
//	for (i = 0; i < 3; ++i)
//		printf("%d\t", aList[i]);
//	return 0;
//}