#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void Swap(int* n1, int* n2);

int main() {

	int cupCnt, cupMove, answer;
	int i, j;
	printf("사용할 컵의 수 : ");
	scanf("%d", &cupCnt);

	printf("컵 이동 횟수 : ");
	scanf("%d", &cupMove);
	int* cupAry = (int*)malloc(sizeof(int) * cupCnt);

	srand(time(NULL));
	int random = rand() % cupCnt;
	

	for (i = 0; i < cupCnt; i++) {
		if (i == random) {
			*(cupAry + i) = 1;
		}else{
			*(cupAry + i) = 0;
		}
	}


	for (i = 0; i < cupCnt; i++) {
		printf("%d ", cupAry[i]);
	}
	printf("\n\n");

	for (j = 0; j < cupMove; j++) {
		int tempCupNum1, tempCupNum2;

		/*srand(time(NULL));*/
		tempCupNum1 = rand() % cupCnt;
		while (1) {
			/*srand(time(NULL));*/
			tempCupNum2 = rand() % cupCnt;
			if (tempCupNum1 == tempCupNum2) {
				continue;
			}else{
				break;
			}
		}
		printf("%d, %d\n", tempCupNum1 + 1, tempCupNum2 + 1);
		Swap(&cupAry[tempCupNum1], &cupAry[tempCupNum2]);
	}

	printf("공이 들어있는 컵의 번호는? ");
	scanf("%d", &answer);
	if (cupAry[answer - 1] == 1) {
		printf("\n정답입니다.\n");
	}else{
		printf("\n오답입니다.\n");
	}

	for (i = 0; i < cupCnt; i++) {
		printf("%d ", cupAry[i]);
	}

	free(cupAry);

	return 0;
}


void Swap(int* n1, int* n2) {

	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;

}

