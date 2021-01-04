//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char szBuffer[16] = { "Hello" };//0x0019FECC
//	char *pszData = szBuffer;//0x0019FEC0 이고 값은 cc fe 19 00
//	int nLength = 0;
//
//	while (*pszData != '\0')
//	{
//		printf("sizeof(*pszData): %d\n", sizeof(*pszData));
//		printf("sizeof(pszData): %d\n", sizeof(pszData));
//		pszData++;
//		nLength++;
//	}
//
//	printf("Length: %d\n", nLength);
//	printf("Length: %d\n", strlen(szBuffer));
//	printf("Length: %d\n", strlen("World"));
//	return 0;
//}