//#include <stdio.h>
//
//int main(void) {
//	int nData = 10;
//	char cData = 'B';
//	int cData_ = (int)cData;
//	int nData_ = cData + 500;
//
//	printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
//	printf("%d, %d\n", sizeof('A'), sizeof(char));
//	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));
//
//	printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData));//�ǿ����ڷ� ����� ����� ��ü�� �ƿ� �������� �ʴ´�
//	++nData;
//	printf("%d\n", nData);
//
//	return 0;
//}
//
////sizeof �����ڴ� ���α׷��� �����ϰ� CPUT�� �����ϴ� ��Ÿ�� �����ڰ� �ƴ϶� �����Ϸ��� ������ Ÿ�ӿ� �����ϴ� ������
////���� �ƹ��� ���� ����ϴ��� ���α׷��� ����ɷ��� �������� ���� ����. ���� ����Ҽ��� ���� ������
////sizeof �������� �ǿ����ڴ� �ڷ���