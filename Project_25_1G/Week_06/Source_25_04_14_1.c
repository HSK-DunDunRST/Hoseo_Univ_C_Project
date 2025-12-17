/*
    Source_25_04_14_1.c
    0이 입력될 때까지 정수를 받아 각각의 절댓값을 반복 출력한다.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int input = 1;
    
    while(input != 0){
        printf("숫자 입력 후 Enter>> ");
        scanf("%d", &input);
        printf("%d의 절댓값은 %d\n", input, abs(input));
    }

    return 0;
}