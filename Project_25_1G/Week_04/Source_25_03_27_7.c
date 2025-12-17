/*
	Source_25_03_27_7.c
	형 변환 + if 조건문 연습
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	double a = 0;

	printf("실수 값을 입력하세요 >> ");
	scanf("%lf", &a);

	if (a - (int)a > 0) {
		printf("소수부는 다음과 같습니다: %f\n", a - (int)a);
	}
	else if ((int)a % 2) {
		printf("정수부는 홀수입니다.\n");
	}
	else {
		printf("정수부는 짝수입니다.\n");
	}
	
}