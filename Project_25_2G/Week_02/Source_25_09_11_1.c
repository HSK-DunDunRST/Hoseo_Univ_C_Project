/*
	Source_25_09_11_1.c
    난수 100개를 생성해 사용자 정의 swap 없이 내림차순 정렬해 출력한다.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int number[SIZE];
    int most;
    int temp;
    srand(time(NULL));

    for(int i=0; i<SIZE; i++){
        number[i] = (rand() % 10000) + 1;
    }

    for(int i = 0; i < SIZE -1; i++){
        most = i;
        for(int j = i + 1; j < SIZE; j++){
            if(number[most] < number[j]) most = j;
        }
        swap(number[i], number[most]);
    }

    for(int i = 0; i < SIZE; i++){
        printf("%5d\t", number[i]);
        if((i+1) % 10 == 0) printf("\n");
    }
}