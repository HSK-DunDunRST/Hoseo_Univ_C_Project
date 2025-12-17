/*
    Source_25_09_04_1.c
    난수 100개를 생성해 합계, 평균, 최대값, 최소값을 계산한다.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(){
    int number[SIZE];
    int total = 0;
    int max, min;
    float avg = 0.0f;

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        number[i] = rand() % 100 + 1; // 1~100 난수 생성
        total += number[i];
    }

    for(int i = 0; i < SIZE; i++){
        printf("%3d\t", number[i]);
        if((i + 1) % 10 == 0)printf("\n");
    }

    avg = (float)total / SIZE;
    max = number[0];
    min = number[0];
    for(int i = 1; i < SIZE; i++){
        if(max < number[i]) max = number[i];
        if(min > number[i]) min = number[i];
    }

    printf("avg = %f, max = %d, min = %d\n", avg, max, min);
    return 0;
}