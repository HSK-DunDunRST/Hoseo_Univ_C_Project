/*
    Source_25_11_06_1.c
    문자열을 입력받아 output.txt에 저장하는 기본 파일 입출력 예제입니다.
 */

/*******************************
 * binary file input / output  *
 *******************************/

#include <stdio.h>

#define SIZE 100

int main()
{
	char input[SIZE];
	FILE* fp = NULL;

	if((fp = fopen("output.txt", "w")) == NULL){
		printf("error...");
		return 0;
	}

	gets(input);
	fputs(input, fp);

	fclose(fp);

	return 0;
}
