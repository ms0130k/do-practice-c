#include <stdio.h>

int main(void) {
	int nSecond = 0;

	scanf_s("%d", &nSecond);
	printf("%d�ʴ� %d�� %02d��", nSecond, nSecond % 60);

	return 0;
}