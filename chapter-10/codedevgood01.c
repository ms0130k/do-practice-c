//#include <stdio.h>
//
////�迭 ���μ��� '������' �Ű������� �޴´�.
////�����Ϳ��� ����� ���� ������ �����Ƿ� int �Ű������� �� �ʿ��ϴ�.
////���� �Է¹޾ƾ� �� ������ ������ �޶����� �� �Լ� �ڵ�� ������ �ʴ´�!
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
//		printf("������ �Է��ϼ���. : ");
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
//	printf("������ ");
//	for (i = 0; i < nSize; ++i)
//		if (i < nSize - 1) printf("%d ", pList[i]);
//		else printf("%d", pList[i]);	
//	printf("�Դϴ�.");
//}