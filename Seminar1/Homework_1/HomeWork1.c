#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int userInput = 0;
	int i, j;

	printf("트리의 높이를 입력하세요 : ");
	scanf("%d", &userInput);
	printf("\n"); // 출력 샘플에 맞게 추가함.
	for (i = 0; i < userInput; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}