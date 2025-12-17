/*
	Source_25_10_16_1.c
    난수로 채운 POINT 배열을 선택 정렬로 (x, y) 오름차순 정렬하는 예제.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

typedef struct point{
    int x;
    int y;
} POINT;

int main()
{
    POINT point[SIZE] = {0};
    POINT temp = {0,0};
    int least;

    srand(time(NULL));

    // 랜덤 값 입력
    for(int i = 0; i < SIZE; i++){
        point[i].x = rand() % 101;   // 0 ~ 100
        point[i].y = rand() % 101;   // 0 ~ 100
    }

    // 정렬 전 출력
    printf("정렬 전 데이터\n");
    for(int i = 0; i < SIZE; i++){
        printf("point[%d] = (%3d, %3d)\n", i, point[i].x, point[i].y);
    }
    printf("\n");

    // 선택 정렬 시작
    for(int i = 0; i < SIZE - 1; i++){
        least = i;
        for(int j = i + 1; j < SIZE; j++){
            if(point[least].x > point[j].x)
                least = j;
            else if(point[least].x == point[j].x 
                    && point[least].y > point[j].y)
                least = j;
        }
        // swap
        temp = point[least];
        point[least] = point[i];
        point[i] = temp;
    }

    // 정렬 후 출력
    printf("---- AFTER SORTING ----\n");
    for(int i = 0; i < SIZE; i++){
        printf("point[%d] = (%3d, %3d)\n", i, point[i].x, point[i].y);
    }

    return 0;
}