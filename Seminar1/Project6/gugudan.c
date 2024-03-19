#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i, j;
	// Sol.1
	/*i = 2, j = 1;
	while (1) {
		printf("%d X %d = %d\t", i, j, i * j);

		if (j % i == 0) {
			i = i + 2;
			j = 1;
			printf("\n");
			continue;
		}
		j++;
		if (j == 8) {
			printf("%d X %d = %d\t", i, j, i * j);
			break;
		}
	}*/

	// Sol.2

	/*for (i = 2; i <= 8; i += 2) {
		for (j = 1; j <= i; j++) {
			printf("%d X %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}*/

	// Sol.3

	for (i = 1; i <= 9; i++) {
		if (i % 2 != 0) {
			continue;
		}

		for (j = 1; j < 9; j++) {
			printf("%d X %d = %d\t", i, j, i * j);
			if (i == j) {
				break;
			}
		}
		printf("\n");
	}

	return 0;
}