#include <stdio.h>

int main(void)
{
	int nInput, nTotal = 1;

	/*char szGuide[32] = { "���̵�1" };
	printf("%s\n", szGuide);
	printf("%s\n", "���̵�2");*/

	for (int i = 0; i < 3; i++) {
		printf("�����Է�: ");
		scanf_s("%d", &nInput);
		nTotal += nInput;
	}


	printf("Total: %d\n", nTotal);

	return 0;
}
//������ ����� �Ǵ� ������ ���� ���꿡 �ռ� �ݵ�� 0���� �ʱ�ȭ �ؾ� �Ѵ�. 0���� �� �ص� �Ǵ� �� ������??