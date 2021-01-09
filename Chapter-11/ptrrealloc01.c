//#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//int main(void)
//{
//	char* pszBuffer = NULL, * pszNewBuffer = NULL;
//
//	pszBuffer = (char*)malloc(12);
//	sprintf_s(pszBuffer, sizeof(char) * 11, "%s", "TestString");
//
//	printf("[%p] %d %s\n", pszBuffer, _msize(pszBuffer), pszBuffer);
//	
//	pszNewBuffer = (char*)realloc(pszBuffer, 32);
//	if (pszBuffer == NULL)
//		free(pszBuffer);
//	sprintf_s(pszNewBuffer, 15, "%s", "TestStringData");
//	
//	printf("[%p/%p] %d %s\n", pszNewBuffer, &pszNewBuffer, _msize(pszNewBuffer), pszNewBuffer);
//
//	free(pszNewBuffer);
//
//
//	return 0;
//}