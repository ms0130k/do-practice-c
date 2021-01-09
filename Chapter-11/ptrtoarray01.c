//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	char astrList[2][12] = { "Hello", "World" };
//	char(*pstrList)[12] = astrList;//배열의 요소 자료형에 대한 포인터를 담는다.
//	//char[3][16] 배열은 char[16]가 요소이고 개수가 3인 배열
//	//char testList[3][16] = {"code", "java"};
//	//char(*ptestList)[16] = testList;
//
//	puts(*astrList);
//	puts(astrList[0]);
//	puts(*(astrList + 1));
//	puts(astrList[1]);
//
//	return 0;
//}