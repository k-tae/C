#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char str[80] = "applejam";              // ���ڿ� �ʱ�ȭ

	//printf("���� ���ڿ� : % s\n", str);     // �ʱ�ȭ ���ڿ� ���
	//printf("���ڿ� �Է� : ");
	//scanf("%s", str);                       // ���ο� ���ڿ� �Է�
	//printf("�Է� �� ���ڿ� : %s\n", str);   // �Էµ� ���ڿ� ���

	int a = 2, b = 3, temp;
	temp = a;
	a = b;
	b = temp;
	printf("%d,%d", a, b);
	return 0;
}