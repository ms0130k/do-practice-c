//#include <stdio.h>
//
//int main(void)
//{
//	/*
//	scanf() �Լ��� ���� ���ڿ��� �̷�� �ִ� �� ���� ���ڵ��� �� ���� ���� �پ��ִ�.
//	�� ������ ������ �����ϰ� "���� ��ȣ ����" ���·� ���� �Է��ϵ�
//	'�ݵ�� ��� �ٿ��� �Է�'
//	�ؾ� �մϴ�. "%d%d"ó�� ���� ������ �����ϸ� ���鹮�ڳ� ��Ű Ȥ�� ���๮�ڷ� �����ؾ� �մϴ�.
//	�׷��� �ݴ�� ������ ������ ��� �޶����� ��� �ٿ��� �Է��ؾ� �մϴ�.
//	*/
//
//	char cOperator = 0;
//	int x = 0, y = 0, nResult = 0;
//
//	scanf_s("%d", &x);
//	scanf_s("%c", &cOperator);
//	scanf_s("%d", &y);
//
//	switch (cOperator)
//	{
//	case '+':
//		nResult = x + y;
//		//break;
//	case '-':
//		nResult = x - y;
//		break;
//	case '*':
//		nResult = x * y;
//		break;
//	case '/':
//		nResult = x / y;
//		break;
//	default:
//		puts("ERROR: �� �� ���� ��� �������Դϴ�.");
//	}
//
//	printf("Result: %d\n", nResult);
//	return 0;
//}