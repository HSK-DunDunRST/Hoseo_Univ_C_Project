/*
	Source_25_03_27_1.c
	자료형 변환과 실수 상수 출력 연습하기
*/

#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	double x = M_PI;
	int i = 10;

	i = (int)(i + x);
	printf("i = %d\n", i);
	printf("int x = %d\n", (int)x);
	printf("double x = %f\n", x);
}