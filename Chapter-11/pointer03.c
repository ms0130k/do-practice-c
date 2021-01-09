//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	char ch = 'A';//0x0019FEDB
//	char* pData = &ch;
//	char** ppData = &pData;
//	char*** pppData = &ppData;
//
//	printf("%c\n", ch);
//	printf("%c\n", *pData);
//	printf("%d\n", &pData == ppData);
//	printf("%d\n", &ppData == pppData);
//	printf("%d\n", ***&ppData);
//	printf("%d\n", **&ppData);
//	printf("%X\n", **&ppData);
//	printf("%d\n", **&ppData == &ch);
//	printf("%c\n", ***&ppData);
//	return 0;
//}