//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	char astrList[2][12] = { "Hello", "World" };
//	char(*pstrList)[12] = astrList;//�迭�� ��� �ڷ����� ���� �����͸� ��´�.
//	//char[3][16] �迭�� char[16]�� ����̰� ������ 3�� �迭
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