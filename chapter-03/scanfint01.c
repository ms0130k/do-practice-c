#include <stdio.h>

int main(void)
{
	int nAge = 0;

	printf("���̸� �Է��ϼ���.: ");
	//����ڰ� �Է��� ������ int �������� �ؼ��ϰ� nAge ������ �����Ѵ�.
	//& ��ȣ�� �ּ� ������
	//&nAge�� nAge ������ �ּҶ�� �ǹ�
	scanf("%d", &nAge);

	printf("����� ���̴� %d�� �Դϴ�.\n", nAge);

	return 0;
}