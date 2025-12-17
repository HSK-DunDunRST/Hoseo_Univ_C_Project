/*
	Source_25_03_27_3.c
	if(조건문) 연습
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int grade = 0;
	printf("시험 점수를 입력하고 결과를 확인하세요. >> ");
	scanf("%d", &grade);

	if (grade > 70) {
		printf("축하합니다. 합격입니다.\n");
	}
	else {
		printf("아쉽지만 불합격입니다.\n");
	}
}