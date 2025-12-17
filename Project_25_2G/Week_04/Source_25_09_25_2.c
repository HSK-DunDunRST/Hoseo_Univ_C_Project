/*
	Source_25_09_25_2.c
    getchar로 한 글자씩 읽어 배열에 저장하고 수동으로 널 종료하는 예제.
 */

#include <stdio.h>

int main(){

    int ch;
    char message[100];
    int i = 0;

    while((ch = getchar()) != '\n' && ch != EOF){
        message[i++] = (char)ch;
    }
    message[i] = '\0';
    printf("%s", message);

    return 0;
}