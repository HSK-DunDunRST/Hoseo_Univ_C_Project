/*
	Source_25_10_02_1.c
    두 문자열을 입력받아 strcmp로 비교 결과를 출력하는 예제.
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char src[100];
	char dest[100];
	int result;

	gets(src);
	gets(dest);

	result = strcmp(src, dest);
	printf("result = %d\n", result);
	return 0;
}
