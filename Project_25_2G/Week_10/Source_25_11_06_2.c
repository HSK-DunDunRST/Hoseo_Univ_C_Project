/*
    Source_25_11_06_2.c
    output.bin을 바이너리 모드로 읽어 배열에 저장하는 기본 파일 입출력 예제입니다.
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
	int i = 0;

	if((fp = fopen("output.bin", "rb")) == NULL){
		printf("error...");
		return 0;
	}

	while(!feof(fp)){
		fread(&input[i], 1, 1, fp);
		i++;
	}

	fclose(fp);

	return 0;
}
