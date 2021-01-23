//#include <stdio.h>
//
//void main()
//{
//	int nData = 0, success = 0;
//	char szBuffer[128] = { 0 };
//	FILE* fp = NULL;
//
//	success = fopen_s(&fp, "fscanfTest.txt", "w");
//	fprintf(fp, "%d,%s\n", 20, "Test");
//	fclose(fp);
//
//	success = fopen_s(&fp, "fscanfTest.txt", "r");
//	fscanf_s(fp, "%d,%s", &nData, szBuffer);
//	fclose(fp);
//
//	printf("%d, %s\n", nData, szBuffer);
//}