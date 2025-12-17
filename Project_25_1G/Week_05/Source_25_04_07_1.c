/*
	Source_25_04_07_1.c
	입력된 홀수 N을 받아 별 패턴과 증가하는 숫자 패턴을 차례로 출력한다.
 */

#include <stdio.h>

int main() {
	int n, count;

	printf("input N (odd) >>");
	scanf("%d", &n);

	// (1)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("===========\n");

	// (2)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("===========\n");
	for (int i = 0; i < n; i++) {
		// (2)
		// for (int j = 0; j < n - i - 1; j++) {
		// 	printf("0");
		// }
		
		count = 1;

		
		for (int j = 0; j <= i; j++) {
			printf("%d", count++);
		}
		// (1)
		for (int j = 0; j < i; j++) {
			printf("%d", count++);
		}
		printf("\n");
	}

	return 0;
}