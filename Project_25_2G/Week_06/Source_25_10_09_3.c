/*
	Source_25_10_09_3.c
    원 구조체와 점의 거리를 계산해 원 내부/외부를 판정하는 예제.
 */

#include <stdio.h>
#include <math.h>

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

double dist(POINT p1, POINT p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main()
{
    CIRCLE c1 = {{10, 10}, 4.5};
    CIRCLE c2;
    c2.radius = 5.5;
    c2.center.x = 10;
    c2.center.y = 20;
    POINT point = {10,15};
    double distance;

    printf("CIRCLE1 = (%d, %d), r : %lf\n", c1.center.x, c1.center.y, c1.radius);
    printf("CIRCLE2 = (%d, %d), r : %lf\n", c2.center.x, c2.center.y, c2.radius);
    printf("point = (%d, %d)\n", point.x, point.y);

    distance = dist(c1.center, point);
    if(distance <= c1.radius){
        printf("원 안에 있습니다.\n");
    }else{
        printf("원 밖에 있습니다.\n");
    }
    return 0;
}