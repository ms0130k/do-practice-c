//#include <stdio.h>
//
//typedef struct USERDATA
//{
//	int nAge;
//	char szName[32];
//	char szPhone[32];
//} USERDATA;
//
//USERDATA GetUserData(void)
//{
//	USERDATA user = { 0 };
//	scanf_s("%d%*c", &user.nAge);
//	gets_s(user.szName, sizeof(user.szName));
//	scanf_s("%s", user.szPhone, sizeof(user.szPhone));
//
//	return user;
//}
//
//int main(void)
//{
//	USERDATA user = { 0 };
//
//	user = GetUserData();
//	printf("%d»ì\t%s\t%s\n", user.nAge, user.szName, user.szPhone);
//
//	return 0;
//}