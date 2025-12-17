/*
	Source_25_10_09_2.c
    여러 구조체(POINT, CIRCLE, RECT)를 정의하고 두 점 사이 거리를 계산하는 예제.
 */

#include <stdio.h>
#include <math.h>

// 3번째 내용에서 추가된 내용

typedef struct point {
    int x;
    int y;
} POINT;

typedef struct {
    POINT center;
    double radius;
} CIRCLE;

typedef struct rect {
    POINT leftTop;
    POINT rightBottom;
} RECT;

// --------------------

double dist(POINT p1, POINT p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(){

    POINT p1 = {10, 20};
    POINT p2;

    p1.x = 20;
    p2.x = 30;
    p2.y = 40;

    printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
    printf("p2.x = %d, p2.y = %d\n", p2.x, p2.y);
    printf("Distance of p1, p2 = %f\n", dist(p1, p2));

    return 0;
}