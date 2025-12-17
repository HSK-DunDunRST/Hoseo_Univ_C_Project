/*
    Source_25_05_22_3.c
    난수 배열에서 최소값과 최대값을 찾아 중앙값을 계산하고,
    중앙값과 가장 가까운 배열 요소를 출력한다.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){

    int count = 0, max = 0, min = 0;
    double middle = 0;
    int arr[10] = {0};

    // 중복되지 않는 랜덤 값 10개 구하기.
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
    for(int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // 최소값 최대값 구하기
    max = arr[0];
    min = arr[0];
    for(int i = 1; i < 10; i++){
        if(arr[i] > max) max = arr[i];
        else if(arr[i] < min) min = arr[i];
    }

    // 중앙값 구하기
    middle = (max + min) / 2.0;

    // 중앙값과 가장 가까운 배열 요소 찾기
    int closest = arr[0];
    double min_diff = fabs(arr[0] - middle);  // fabs - 실수 절댓값
    for (int i = 1; i < 10; i++) {
        double diff = fabs(arr[i] - middle);
        if (diff < min_diff) {
            min_diff = diff;
            closest = arr[i];
        }
    }

    printf("min: %d, max: %d middle: %.lf\n", min, max, middle);
    printf("%d\n", closest);
    return 0;
}