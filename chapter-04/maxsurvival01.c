#include <stdio.h>

int main(void)
{
	int nMax = 0, nInput = 0;

	scanf_s("%d", &nInput);
	nMax = nInput;

	scanf_s("%d", &nInput);
	nMax = nMax > nInput ? nMax : nInput;

	scanf_s("%d", &nInput);
	nMax = nMax > nInput ? nMax : nInput;

	printf("MAX: %d\n", nMax);
	return 0;
}