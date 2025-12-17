/*
	Source_25_03_24_4.c
	원의 둘레와 넓이 구하기
*/

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void main() {
	
	int r = 0;
	double ans1 = 0;
	double ans2 = 0;

	printf("원의 반지름을 입력해 주세요>> ");
	scanf("%d", &r);

	printf("원의 둘레는 %.2f입니다.\n", 2 * M_PI * r);
	printf("원의 넓이는 %.2f입니다.\n", pow(r, 2) * M_PI);


}