/*
    Source_25_04_14_4.c
    두 정수를 입력받아 합, 곱, 몫을 계산하는 함수를 호출하고 결과를 출력한다.
 */

#include <stdio.h>

int sum(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(){

    int a = 0;
    int b = 0;

    printf("두 정수 입력>> ");
    scanf("%d %d", &a, &b);
    printf("두 수의 합: %d\n", sum(a, b));
    printf("두 수의 곱: %d\n", mul(a, b));
    printf("두 수의 몫: %d\n", div(a ,b));
    return 0;
}

int sum(int a, int b){
    return a + b;
}

int mul(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a / b;
}
