/*
    Source_25_11_27_4.c
    난수를 이용해 2차원 배열을 채우고 출력
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 100
#define COL 100

int main(void)
{
	int array[ROW][COL];
	int row, col;

	/* 입력: 행과 열 */
	scanf("%d %d", &row, &col);

	/* 난수 초기화 후 배열 채우기 */
	srand((unsigned int)time(NULL));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			array[i][j] = rand() % 1000;
		}
	}

	/* 배열 출력 */
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("[%3d] ", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}
