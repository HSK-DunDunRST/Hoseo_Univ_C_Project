/*
    Source_25_05_22_2.c
    1부터 100 사이의 난수 10개를 생성해 짝수와 홀수로 구분해 각각 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int odd[10] = {0}, even[10] = {0};
    int odd_index = 0, even_index = 0;

    for(int i = 0; i < 10; i++){
        int rand_number = rand() % 100 + 1;
        if(rand_number % 2 == 0) even[even_index++] = rand_number;
        else if(rand_number % 2 == 1) odd[odd_index++] = rand_number;
    }

    for(int i = 0; i < even_index; i++)
        printf("%d ", even[i]);
    printf("\n");
    for(int i = 0; i < odd_index; i++)
        printf("%d ", odd[i]);
    printf("\n");

    return 0;
}