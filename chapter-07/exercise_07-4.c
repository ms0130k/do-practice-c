#include <stdio.h>

int main(void)
{
	int nInput;

//INPUT:
//	printf("Input number : ");
//	scanf_s("%d", &nInput);
//
//	if (nInput < 0 || nInput > 0)
//		goto INPUT;

	while (1)
	{
		printf("Input number: ");
		scanf_s("%d", &nInput);

		if (nInput == 0) break;
	}

	puts("End");
	return 0;
}