#include <stdio.h>

int main(void)
{
	int nInput, nTotal = 1;

	/*char szGuide[32] = { "가이드1" };
	printf("%s\n", szGuide);
	printf("%s\n", "가이드2");*/

	for (int i = 0; i < 3; i++) {
		printf("정수입력: ");
		scanf_s("%d", &nInput);
		nTotal += nInput;
	}


	printf("Total: %d\n", nTotal);

	return 0;
}
//누적의 대상이 되는 변수는 누적 연산에 앞서 반드시 0으로 초기화 해야 한다. 0으로 안 해도 되는 것 같은데??