#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 33�� 24�ڱ�ȫ
int main() {
	
	int n1, n2, n3;

	printf("3���� ������ �Է��ϼ���: ");

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