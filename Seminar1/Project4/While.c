#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num, i;
	int sum = 0;
	printf("���ϰ��� �ϴ� ������ ����? : ");
	scanf("%d", &num);

	for (i = 0; i <= num; i++) {
		sum = sum + i;
	}

	printf("0���� %d������ ���� ��� : %d\n", num, sum);

	return 0;
}