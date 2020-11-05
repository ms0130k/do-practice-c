#include<stdio.h>

int main(void) {
	/*printf("1) ===================");
	char szText[32] = { 0 };
	char ch1 = getchar();
	char ch2 = getchar();
	putchar(ch2);

	printf("2) ===================");*/
	char ch = getchar();
	char szName[32] = { 0 };
	gets(szName);
	puts(szName);
	printf("Å×½ºÆ® %s", &szName);



	return 0;
}