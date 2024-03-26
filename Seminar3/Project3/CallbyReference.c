#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b);

int main() {

	int m = 2, n = 9;

	printf(" [Àü] a = %d b = %d\n", m, n);

	swap(&m, &n);

	printf(" [ÈÄ] a = %d b = %d\n", m, n);

	return 0;
}


void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}