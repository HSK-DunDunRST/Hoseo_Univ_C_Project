/*
	Source_25_03_24_1.c
	정수의 각 자리 숫자 추출하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	
	int k = 0;
	int d = 1;

	printf("정수 3자리를 입력하여 주십시오. (예)123 >> ");
	scanf("%d", &k);

	printf("%d의 일의 자리 숫자: %d\n", d, k % 10);
	k = k / 10;
	d = d * 10;

	printf("%d의 십의 자리 숫자: %d\n", d, k % 10);
	k = k / 10;
	d = d * 10;

	printf("%d의 백의 자리 숫자: %d\n", d, k % 10);

}