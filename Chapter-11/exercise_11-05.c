#include <stdio.h>

char* GetString();

int main(void)
{
	char* pnList = GetString();
	puts(pnList);
	return 0;
}

char* GetString()
{
	char buffer[100] = { 0 };
	char* result = gets_s(buffer, sizeof(buffer));
	puts(result);
	return result;
}