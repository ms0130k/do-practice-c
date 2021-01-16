#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

int main(int args, char* argv[])
{
	printf("%d\n", Add(3, 4));
	printf("%d\n", Minus(7, 5));
	return 0;
}