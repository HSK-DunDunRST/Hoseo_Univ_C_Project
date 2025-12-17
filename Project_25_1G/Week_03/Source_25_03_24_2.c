/*
	Source_25_03_24_2.c
	정수의 몫과 나머지 구하기
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int a = 0;
	int b = 0;
	int division = 0;
	int mod = 0;

	printf("정수 a를 입력하여 주십시오 >>");
	scanf("%d", &a);

	printf("정수 b를 입력하여 주십시오 >>");
	scanf("%d", &b);

	division = a / b;
	mod = a % b;

	printf("\n정수 %d의 몫은 %d이고 나머지는 %d입니다..\n", a, division, mod);
}