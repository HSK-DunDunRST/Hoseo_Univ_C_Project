/*
	Source_25_03_24_5.c
	삼항 연산자 사용하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int a = 0;
	int b = 0;

	printf("정수 두 개를 입력하십시오.\n");
	printf("입력>> ");
	scanf("%d %d", &a, &b);

	(a > b) ? printf("%d", a) : printf("%d", b);

	
}

