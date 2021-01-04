//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	char szBuffer[] = { "Hello" };
//	char* pszBuffer = "Hello";
//	printf("%c\n", pszBuffer[0]);
//	pszBuffer[0] = 'A';//안 됨. 
//	//데이터 영역 중 읽기전용 영역 어딘가에 "Hello"라는 문자열이 저장되고 첫 글자인 'H'가 저장된 기준주소가 포인터의 초깃값이 됩니다. 포인터가 가리키는 대상 메모리가 읽기만 가능한 영역이므로 l-value형태로 사용할 수는 없고 오로지 r-value 형식으로만 사용 할 수 있습니다.
//	printf("%c\n", pszBuffer[0]);
//
//
//
//
//
//
//	char* pszData = NULL;
//
//	pszData = (char*)malloc(sizeof(char) * 6);
//	pszData[0] = 'H';
//	pszData[1] = 'e';
//	pszData[2] = 'l';
//	pszData[3] = 'l';
//	pszData[4] = 'o';
//	pszData[5] = '\0';
//
//	int a = puts(szBuffer);
//	int b = puts(pszBuffer);
//	int c = puts(pszData);
//
//
//	printf("\n%d %d %d", a, b, c);
//
//
//	return 0;
//}