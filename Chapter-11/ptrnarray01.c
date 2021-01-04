#include <stdio.h>

int main(void)
{
	//배열의 이름은 연속된 각 요소들 중 전체를 대표하는 0번째 요소에 대한 '주소 상수'이다.
	int aList[5] = { 0 };
	int* pnData = aList;

	printf("aList[0]: %d\n", aList[0]);
	
	*pnData = 20;
	printf("aList[0]: %d\n", aList[0]);

	pnData[1] = 30;
	pnData[4] = 10;
	pnData[5] = 40;

	printf("aList[1]: %d\n", aList[1]);
	printf("pnData[4]: %d\n", pnData[4]);
	printf("aList[4]: %d\n", aList[4]);
	printf("pnData[5]: %d\n", pnData[5]);

	return 0;
}