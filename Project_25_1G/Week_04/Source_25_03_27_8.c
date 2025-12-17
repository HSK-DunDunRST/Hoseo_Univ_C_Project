/*
	Source_25_03_27_8.c
	switch ~ case문 연습
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0;

	printf("입력>> ");
	scanf("%d", &a);

	switch (a) {
		case 1:
			printf("일");
		case 2:
			printf("이");
		case 3:
			printf("삼");
	}
}