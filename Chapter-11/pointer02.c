//#include <stdio.h>
//
//int main()
//{
//	int x = 10;
//	int* pnData = &x;
//
//	printf("x: %d\n", x);
//
//	*pnData = 20;
//
//	printf("x: %d\n", x);
//	*(int*) 0x0019FED8 = 30;
//	printf("x: %d\n", x);
//	return 0;
//}
//
////*pnData의 의미: 포인터 변수 pnData에 저장된 주소를 가진 메모리를 int형 변수로 취급
////*(int*) 0x0019FED8: 0x0019FED8 주소에 저장된 데이터를 포인터변수로 