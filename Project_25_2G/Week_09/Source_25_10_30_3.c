/*
    Source_25_10_30_3.c
    output.txt를 읽어서 output2.txt에 쓸 준비만 하는 기본 뼈대 코드입니다.
 */

#include <stdio.h>

int getline(char* line)
{
}

int main()
{
	char input[100];

	FILE* fp_src;
	FILE* fp_dest;

	if((fp_src = fopen("output.txt", "r")) == NULL){
		printf("error...");
		return 0;
	}

	if((fp_dest = fopen("output2.txt", "w")) == NULL){
		printf("error...");
		return 0;
	}

	while(!feof(fp_src)){
	}

	fclose(fp_src);
	fclose(fp_dest);
	return 0;
}
