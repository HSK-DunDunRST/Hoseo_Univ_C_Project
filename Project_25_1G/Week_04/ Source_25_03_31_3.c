/*
	Source_25_03_31_3.c
	for 문으로 1부터 N까지의 합 계산하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int input = 0;
	int sum = 0;
	printf("N까지의 값을 입력>> ");
	scanf("%d", &input);

	printf("1부터 N까지의 합을 출력\n");
	for (int i = 0; i < input; i++) {
		sum += (i + 1);
		printf("%d  ", i + 1);
	}
	printf("\n");
	printf("1부터 N까지의 합: %d\n", sum);
}