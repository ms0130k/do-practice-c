//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//char* MyStrrev(char*);
//
//int main(void)
//{
//	/*char string[12] = { "coding" };
//	char* str = NULL;
//	str = _strrev(string);*/
//	char str[12] = { "coding" };
//	printf("%s\n", MyStrrev(str));
//	
//
//	return 0;
//}
//
//char* MyStrrev(char* src)
//{
//	int length = 0;
//	int i = 0;
//	char* des = NULL;
//	while (*src != '\0')
//	{
//		src++;
//		length++;
//	}
//	src -= length;
//	des = (char*)calloc(length + 1, sizeof(char));
//	for (i = 0; i < length; ++i)
//		des[i] = src[length - 1 - i];
//	memcpy(src, des, length);
//	free(des);
//	return src;
//}