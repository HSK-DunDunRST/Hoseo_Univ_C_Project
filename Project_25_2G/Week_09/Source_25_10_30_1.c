/*
	Source_25_10_30_1.c
    표준 입력에서 한 줄을 읽어 파일(output.txt)에 저장하는 예제.
 */

#include <stdio.h>

int main(){


    char input[100];
    int ch, i;
    FILE* fp;
    fp = fopen("output.txt", "w");
    
    i = 0;

    while((ch = getchar()) != '\n' && ch != EOF){
        input[i++] = (char)ch;
    }

    input[i] = '\0';
    fputs(input, fp);
    fclose(fp);

    return 0;
}