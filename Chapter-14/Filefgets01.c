//#include <stdio.h>
//#include <string.h>
//
//void main()
//{
//	FILE* fp = NULL;
//	char szBuffer[512] = { 0 };
//	int success = 0;
//
//	success = fopen_s(&fp, "Test.txt", "w");
//	fputs("Test\n", fp);
//	fputs("String\n", fp);
//	fputs("Data\n", fp);
//	fclose(fp);
//
//	success = fopen_s(&fp, "Test.txt", "r");
//	if (success != 0) return;
//
//	while (fgets(szBuffer, sizeof(szBuffer), fp))
//	{
//		printf("%s", szBuffer);
//		memset(szBuffer, 0, sizeof(szBuffer));
//	}
//
//	fclose(fp);
//}