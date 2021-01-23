//#include <stdio.h>
//
//void main()
//{
//	FILE* fp = NULL;
//	char ch;
//	int success = 0;
//
//	success = fopen_s(&fp, "Test.txt", "w");
//	fputs("Test string!", fp);
//	fclose(fp);
//
//	success = fopen_s(&fp, "Test.txt", "r");
//	if (success != 0) return;
//
//	while ((ch = fgetc(fp)) != EOF)
//		putchar(ch);
//
//	fclose(fp);
//}