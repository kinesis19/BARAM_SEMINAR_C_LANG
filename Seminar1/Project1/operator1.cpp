#include <stdio.h>

int main() {

	int num1 = 8;
	int num2 = 8;
	int result1, result2;

	result1 = ++num1 + 5;
	result2 = num2++ + 5;
	
	printf("���� ���� �����ڿ� ���� ������� %d, ������ ���� %d\n", result1, num1);
	printf("���� ���� �����ڿ� ���� ������� %d, ������ ���� %d\n", result2, num2);


	return 0;
}