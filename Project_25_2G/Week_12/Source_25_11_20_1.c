/*
    Source_25_11_20_1.c
    명령라인 입력방법과 atoi 함수 사용 연습 (Practice 1)
 */

/*************************************************************
 * Practice 1. 명령라인 입력방법과 atoi 함수 사용               *
 *************************************************************/

 #include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int a, b;
	a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("a + b = %d\n", a + b);
	return 0;
}
