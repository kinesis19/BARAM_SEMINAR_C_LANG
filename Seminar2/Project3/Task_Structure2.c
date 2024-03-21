#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

typedef struct Student {
	int grade;
	int hakbeon;
	char name[20];
}student;

int main() {

	student s1[5] = { {1, 2021741001, "아이유"}, {1, 2021741002, "이도현"}, {1, 2021741003, "이종석"}, {1, 2021741004, "김태리"}, {1, 2021741005, "탁재훈"} };

	printf("%d\n%d\n%d\n%d\n%d", s1[0].hakbeon, s1[1].hakbeon, s1[2].hakbeon, s1[3].hakbeon, s1[4].hakbeon);

	return 0;
}