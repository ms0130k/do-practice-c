#include <stdio.h>

int main(void)
{
	char ch1 = 'A', ch2 = 'B', ch3 = 'D';
	char szData[4] = { 'A', 'B', ch3 };
	char szNewData[4] = { "ABC" };

	ch3 = ch1 + 4;
	printf("%c", ch3);
	return 0;
}