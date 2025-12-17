/*
    Source_25_04_14_2.c
    현재 시간을 시드로 설정해 난수를 5개 생성하여 출력한다.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    for(int i = 0; i< 5; i++)
        printf("%d\n", rand());
    return 0;
}