#include <stdio.h>

int main() {

	int num1 = 8;
	int num2 = 8;
	int result1, result2;

	result1 = ++num1 + 5;
	result2 = num2++ + 5;
	
	printf("전위 증가 연산자에 의한 결과값은 %d, 변수의 값은 %d\n", result1, num1);
	printf("후위 증가 연산자에 의한 결과값은 %d, 변수의 값은 %d\n", result2, num2);


	return 0;
}