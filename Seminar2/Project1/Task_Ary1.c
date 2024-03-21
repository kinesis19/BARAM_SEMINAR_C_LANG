#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main() {

	int score[10] = {100, 90, 75, 100, 95, 90, 80, 65, 70, 85};
	int i;

	// for문을 활용해 상수 출력
	for (i = 0; i < 10; i++) {
		printf("%d\n", score[i]);
	}
	
	return 0;
}