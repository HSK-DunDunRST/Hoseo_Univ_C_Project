/*
	Source_25_03_27_5.c
	조건문 예제(학점 등급 확인)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char grade = ' ';

	printf("학점을 입력하고 Enter를 누르세요. >> ");
	scanf("%c", &grade);
	
	if (grade <= 'D') {
		printf("해당 과목 합격\n");
	}
}