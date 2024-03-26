#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a = 10;
	int b = 20;

	int* ap = &a;
	int* bp = &b;

	printf("%d\n", *ap);
	printf("%d\n", *bp);
	printf("%d\n", *ap + *bp);


	return 0;
}