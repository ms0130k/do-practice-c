#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char aList[10];
	scanf_s("%s", aList, sizeof(aList));
	puts(aList);
	
	printf("size: %d\n", sizeof(aList));
	char* bList = (char*)malloc(sizeof(aList));
	memcpy(bList, aList, 2);
	bList = realloc(bList, 20);
	/*for (int i = 0; i < 10; ++i)
	{
		bList[i] = aList[i];
	}*/
	puts(bList);

	return 0;
}