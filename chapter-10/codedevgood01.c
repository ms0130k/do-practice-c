//#include <stdio.h>
//
////배열 실인수는 '포인터' 매개변수로 받는다.
////포인터에는 요소의 개수 정보가 없으므로 int 매개변수가 더 필요하다.
////만일 입력받아야 할 정수의 개수가 달라져도 이 함수 코드는 변하지 않는다!
//
//void InitList(int*, int);
//void SortList(int*, int);
//void PrintList(int*, int);
//
//int main(void)
//{
//	int aList[5] = { 0 };
//	int nListSize = sizeof(aList) / 4;
//	
//	InitList(aList, nListSize);
//	SortList(aList, nListSize);
//	PrintList(aList, nListSize);
//	return 0;
//}
//
//void InitList(int* pList, int nSize)
//{
//	int i = 0;
//	for (i = 0; i < nSize; ++i)
//	{
//		printf("정수를 입력하세요. : ");
//		scanf_s("%d", &pList[i]);
//	}
//}
//
//void SortList(int* pList, int nSize)
//{
//	int i = 0, j = 0, nTmp = 0;
//	for (i = 0; i < nSize - 1; ++i)
//		for (j = i + 1; j < nSize; ++j)
//			if (pList[i] > pList[j])
//			{
//				nTmp = pList[i];
//				pList[i] = pList[j];
//				pList[j] = nTmp;
//			}
//}
//
//void PrintList(int* pList, int nSize)
//{
//	int i = 0;
//	printf("순서는 ");
//	for (i = 0; i < nSize; ++i)
//		if (i < nSize - 1) printf("%d ", pList[i]);
//		else printf("%d", pList[i]);	
//	printf("입니다.");
//}