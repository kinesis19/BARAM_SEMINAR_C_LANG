#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		*(arr + i) = i * 10;
	}

	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d: %d\n", i + 1, *(arr + i));
	}

	free(arr);


	return 0;
}