/*
	Source_25_03_31_1.c
	for 문으로 반복 출력 연습하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	for (int i = 0; i < 6; i++){
		printf("%d) 이름: 홍길동\n", i + 1);
	}	

	for (int i = 0; i < 6; i += 2) {
		printf("%d) 이름: 홍길동\n", i + 1);
	}

}