#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GettingMaximum(int ary[]);

int main() {
	int ary[5] = {0, };
	int i;
	int max;

	for (i = 0; i < 5; i++) {
		printf("�迭�� %d��° ��Ҵ�? ", i + 1);
		scanf("%d", &ary[i]);
	}

	max = GettingMaximum(ary);
	printf("�ִ��� %d�̴�.", max);
	return 0;
}

int GettingMaximum(int ary[]) {
	int i, j;
	int returnMaximum;
	for (i = 0; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			if (ary[j] < ary[i]) {
				ary[j] = ary[i];
			}
		}
	}
	returnMaximum = ary[4];

	return returnMaximum;
}