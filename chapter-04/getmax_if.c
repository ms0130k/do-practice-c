#include <stdio.h>

int main(void)
{
	/*int num_1, num_2, num_3, nMax;
	scanf_s("%d%d%d", &num_1, &num_2, &num_3);
	if (num_1 > num_2)
	{
		nMax = num_1;
	}
	else {
		nMax = num_2;
	}
	if (num_3 > nMax) {
		printf("MAX: %d", num_3);
	}
	else {
		printf("MAX: %d", nMax);
	}*/

	int nInput, nMax;

	scanf_s("%d", &nMax);
	scanf_s("%d", &nInput);
	if (nInput > nMax)
		nMax = nInput;
	scanf_s("%d", &nInput);
	if (nInput > nMax)
		nMax = nInput;
	printf("MAX: %d", nMax);
	

	return 0;
}