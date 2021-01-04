//#include <stdio.h>
//
//int main(void)
//{
//	char szBuffer[16] = { "Hello" };
//	char *pszData = szBuffer;
//
//	while (*pszData != '\0')
//	{
//		pszData++;
//	}
//
//	printf("Length: %d\n", pszData - szBuffer);
//
//	int nData = 30;
//	int* pnData = &nData;
//
//	int nData_ = 20;
//	int* pnData_ = &nData_;
//	printf("&nData: %d\n", &nData);
//	printf("&nData_: %d\n", &nData_);
//	printf("pnData - pnData_ = %d\n", pnData - pnData_);
//
//	return 0;
//}