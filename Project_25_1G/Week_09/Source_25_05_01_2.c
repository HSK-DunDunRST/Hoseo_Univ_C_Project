/*
    Source_25_05_01_2.c
    문자열을 정수나 실수로 변환하는 표준 함수를 사용해 결과를 출력한다.
 */

#include <stdio.h>
#include <stdlib.h>

// ch12 - 문자열을 숫자로 변환하는 함수
int main(){

    // 문자열을 int형 정수로 변환
    printf("int형 숫자: %d\n", atoi("24545"));
    // 문자열을 long형 정수로 변환
    printf("long형 숫자: %ld\n", atol("987654321"));
    // 문자열을 double형 실수로 변환
    printf("double형 숫자: %lf\n", atof("3456.789"));

    return 0;
}