/*
	Source_25_03_27_6.c
	if ~ else if ~ else 문
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int a = 0;
	int b = 0;
	int result = 0;

	printf("a와 b를 순서대로 입력하세요. (둘 다 양수)>> ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		result = a % b;
		printf("%d\n", result);
	} 
	else if (a < b) {
		result = b % a;
		printf("%d\n", result);
	}
	else {
		printf("같은 수를 입력했습니다.\n");
	}

}