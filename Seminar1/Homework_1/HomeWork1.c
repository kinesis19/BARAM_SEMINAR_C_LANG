#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int userInput = 0;
	int i, j;

	printf("Ʈ���� ���̸� �Է��ϼ��� : ");
	scanf("%d", &userInput);
	printf("\n"); // ��� ���ÿ� �°� �߰���.
	for (i = 0; i < userInput; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}