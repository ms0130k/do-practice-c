//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	char szBuffer[] = { "Hello" };
//	char* pszBuffer = "Hello";
//	printf("%c\n", pszBuffer[0]);
//	pszBuffer[0] = 'A';//�� ��. 
//	//������ ���� �� �б����� ���� ��򰡿� "Hello"��� ���ڿ��� ����ǰ� ù ������ 'H'�� ����� �����ּҰ� �������� �ʱ갪�� �˴ϴ�. �����Ͱ� ����Ű�� ��� �޸𸮰� �б⸸ ������ �����̹Ƿ� l-value���·� ����� ���� ���� ������ r-value �������θ� ��� �� �� �ֽ��ϴ�.
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