/*
	Source_25_03_31_2.c
	삼항 연산자로 입력값부터 99까지의 정수를 홀짝 구분하기
*/
	
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int input = 0;

	printf("100까지의 시작값을 입력>> ");
	scanf("%d", &input);

	for (int i = input; i < 100; i++) {
		const char* label = (i % 2 == 0) ? "짝수" : "홀수";
		printf("%s: %d\n", label, i);
	}

}