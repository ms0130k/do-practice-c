#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int main(int args, char* argv[])
{
	printf("%d\n", Add(3, 4));
	return 0;
}