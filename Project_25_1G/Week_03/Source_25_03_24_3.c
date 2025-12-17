/*
	Source_25_03_24_3.c
	증감 연산자 사용하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0;

	printf("[정수 a를 입력하십시오.] >> ");

	scanf("%d", &a);
	
	printf("%d\n", a++);
	printf("%d\n", ++a);
	printf("%d\n", a--);
	printf("%d\n", --a);
}