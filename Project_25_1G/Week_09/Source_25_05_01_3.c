/*
    Source_25_05_01_3.c
    실수형 숫자에 대해 올림과 내림을 계산해 출력한다.
 */

#include <stdio.h>
#include <math.h>

// ch12 - 정수형 변환 함수
int main(){
    double x = 123.45;
    double y = -987.654;

    printf("cell(%f) = %f\n", x, ceil(x));
    printf("floor%f) = %f\n", x, floor(x));
    
    printf("cell(%f) = %f\n", y, ceil(y));
    printf("floor%f) = %f\n", y, floor(y));

    return 0;
}