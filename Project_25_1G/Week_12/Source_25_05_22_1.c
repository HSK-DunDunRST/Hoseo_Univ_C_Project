/*
    Source_25_05_22_1.c
    중복 없는 난수를 생성해 전체, 짝수, 홀수 목록을 차례로 출력한다.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int arr[10] = {0};
    int count = 0;

    srand(time(NULL));

    while (count < 10) {
        int num = rand() % 100 + 1; // 1~100 사이의 난수
        int duplicate = 0;
        for (int i = 0; i < count; i++) {
            if (arr[i] == num) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            arr[count++] = num;
        }
    }

    // 결과 출력 (확인용)
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++)
        if(arr[i] % 2 == 0) printf("%d ", arr[i]);
    printf("\n");
    for(int i = 0; i < 10; i++)
        if(arr[i] % 2 == 1) printf("%d ", arr[i]);
    printf("\n");


    return 0;
}

