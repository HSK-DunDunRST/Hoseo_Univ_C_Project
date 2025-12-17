/*
	Source_25_09_25_1.c
    널 종료 문자가 없는 char 배열을 문자열처럼 출력할 때 발생하는 문제를 보여주는 예제.
 */

#include <stdio.h>

int main(){

    char message[5] = {'a', 'b', 'c', '\0'};
    char message2[5] = {'a', 'b', 'c', 'd', 'e'};

    printf("message = %s, message2 = %s", message, message2);

    return 0;
}