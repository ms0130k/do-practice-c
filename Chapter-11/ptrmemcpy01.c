//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//
//int main(void)
//{
//	char szBuffer[12] = { "HelloWorld" };
//	char szNewBuffer[12] = { 0 };
//
//	memcpy(szNewBuffer, szBuffer, 4);
//	puts(szNewBuffer);
//
//	memcpy(szNewBuffer, szBuffer, 6);
//	puts(szNewBuffer);
//
//	memcpy(szNewBuffer, szBuffer, 2);
//	puts(szNewBuffer);
//
//	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
//	puts(szNewBuffer);
//
//	int aList[12] = { 999999, 888888, 7777777 };//3f 42 0f 00, 38 90 0d 00, f1 ad 76 00
//	int* paList = (int*)malloc(sizeof(int) * 4);
//	memcpy(paList, aList, 4);
//	
//	memcpy(paList, aList, 6);
//
//	return 0;
//}