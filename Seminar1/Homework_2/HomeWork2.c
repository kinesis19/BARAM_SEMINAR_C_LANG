#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 33기 24박기홍
int main() {
	
	int n1, n2, n3;

	printf("3개의 정수를 입력하세요: ");

	scanf("%d %d %d", &n1, &n2, &n3);

	while (1) {
		if (n3 == n1 + n2) {
			printf("+\n");
			break;
		}else if(n3 == n1 - n2 || n3 == n2 - n1){
			printf("-\n");
			break;
		}else if(n3 == n1 * n2){
			printf("*\n");
			break;
		}else if(n3 == n1 / n2 || n3 == n2 / n1){
			printf("/\n");
			break;
		}else{
			printf("Incorrect\n");
			break;
		}
	}

	return 0;
}