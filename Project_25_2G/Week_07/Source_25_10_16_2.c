/*
	Source_25_10_16_2.c
    난수로 생성한 POINT 배열을 (x, y) 기준 오름차순 선택 정렬하는 예제.
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

    // 랜덤 데이터 생성
    for(int i = 0; i < SIZE; i++){
        point[i].x = rand() % 101;
        point[i].y = rand() % 101;
    }

    // 정렬 전 출력
    printf("Before Sorting:\n");
    for(int i = 0; i < SIZE; i++){
        printf("point[%2d] = (%3d, %3d)\n", i, point[i].x, point[i].y);
    }

    // 선택 정렬
    for(int i = 0; i < SIZE - 1; i++){
        least = i;
        for(int j = i + 1; j < SIZE; j++){
            if(point[least].x > point[j].x)
                least = j;
            else if(point[least].x == point[j].x && point[least].y > point[j].y)
                least = j;
        }
        temp = point[least];
        point[least] = point[i];
        point[i] = temp;
    }

    // 정렬 후 출력
    printf("\nAfter Sorting:\n");
    for(int i = 0; i < SIZE; i++){
        printf("point[%2d] = (%3d, %3d)\n", i, point[i].x, point[i].y);
    }

    return 0;
}