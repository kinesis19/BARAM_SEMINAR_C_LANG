#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num, i;
	int sum = 0;
	printf("더하고자 하는 마지막 값은? : ");
	scanf("%d", &num);

	for (i = 0; i <= num; i++) {
		sum = sum + i;
	}

	printf("0부터 %d까지의 덧셈 결과 : %d\n", num, sum);

	return 0;
}