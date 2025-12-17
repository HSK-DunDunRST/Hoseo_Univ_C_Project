/*
    Source_25_05_19_3.c
    난수 배열을 생성한 뒤 단순 선택 정렬로 오름차순 정렬한다.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int arr[10] = {0};
    int temp = 0;
    srand(time(NULL));

    for(int i = 0; i < 10; i++)
        arr[i] = rand() % 100 + 1;

    for(int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");


    return 0;
}
