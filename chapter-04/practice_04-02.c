#include <stdio.h>

int main(void) {
	int nSecond = 0;

	scanf_s("%d", &nSecond);
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�", nSecond, nSecond / 60 / 60, nSecond / 60 % 60, nSecond % 60);

	return 0;
}