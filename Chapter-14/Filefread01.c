//#include <stdio.h>
//
//typedef struct _USERDATA
//{
//	char szName[16];
//	char szPhone[16];
//} USERDATA;
//
//void main()
//{
//	FILE* fp = NULL;
//	USERDATA UserData = { 0 };
//
//	fopen_s(&fp, "Test.dat", "rb");
//	if (fp == NULL) return;
//
//	//fread(&UserData, sizeof(USERDATA), 1, fp);
//	puts(UserData.szName);
//	puts(UserData.szPhone);
//	fclose(fp);
//}