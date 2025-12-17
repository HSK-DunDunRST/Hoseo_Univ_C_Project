/*
	Source_25_03_27_4.c
	조건문 (크거나 같은 비교) + else문
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int age = 0;
	printf("나이를 입력하고 결과를 확인하세요. >> ");
	scanf("%d", &age);

	if (age >= 19) {
		printf("성인입니다.\n");
	}
	else {
		printf("미성년자입니다.\n");
	}
}