/*
    Source_25_04_14_3.c
    현재 시간을 시드로 설정해 0부터 1 사이의 난수 5개를 실수 형태로 출력한다.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        printf("%f\n", rand() / 32767.);
    }

    return 0;
}