#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int PrintMenu(void)
{
	int nInput = 0;
	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &nInput);

	return nInput;
}

int main(void)
{
	int nMenu = 0;
	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{
		case 1:
			puts("�� �׸��� �߰��մϴ�.");
			break;
		case 2:
			puts("���� �׸񿡼� �˻��մϴ�.");
			break;
		case 3:
			puts("��ü ������ ����մϴ�.");
			break;
		case 4:
			puts("���� �׸��� �����մϴ�.");
			break;
		default:
			puts("�� �� ���� ����Դϴ�.");
		}

		_getch();
	}

	puts("Bye~~!");
	return 0;
}