//#include <stdio.h>
//#include <string.h>
//
//
//int MyStrcpy(char szBufferDst[], int dstSize, char szBufferSrc[]);
//
//int main(int argc, char* argv[])
//{
//	char szBufferSrc[50] = { "TestString" };
//	char szBufferDst[12] = { 0 };
//
//	printf("%d\n", MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc));
//	puts(szBufferDst);
//	return 0;
//}
//
//int MyStrcpy(char szBufferDst[], int dstSize, char szBufferSrc[])
//{
//	//for (int i = 0; i < dstSize; ++i)
//	//{
//	//	printf("%d\n", i);
//	//	printf("%d\n", 0 == 0);
//	//	szBufferDst[i] = szBufferSrc[i];
//	//	if (szBufferSrc[i] == 0) break;
//	//}
//
//	int i = 0;
//	int nLenSrc = strlen(szBufferSrc);
//	if (nLenSrc + 1 > dstSize) return dstSize - (nLenSrc + 1);
//
//	while (szBufferSrc[i] != NULL)
//	{
//		szBufferDst[i] = szBufferSrc[i];
//		++i;
//	}
//	szBufferDst[i] = 0;
//	szBufferDst[i] = '\0';
//	return nLenSrc;
//}