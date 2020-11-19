#include <stdio.h>

int main(void) {
	int nSecond = 0;

	scanf_s("%d", &nSecond);
	printf("%d초는 %d분 %02d초", nSecond, nSecond % 60);

	return 0;
}