/*
    Source_25_04_17_1.c
    입력된 정수 N까지의 합과 팩토리얼을 재귀 함수로 계산해 출력한다.
 */

#include <stdio.h>

int add(int n);
int fact(int n);

int main(){

    int input = 0;

    printf("정수 입력>> ");
    scanf("%d", &input);

    printf("%d까지의 합: %d\n", input, add(input));
    printf("%d까지의 곱: %d\n", input, fact(input));

    return 0;
}

int add(int n){
    if (n == 1)
        return 1;
    return n + add(n-1);
}

int fact(int n){
    if (n==1)
        return 1;
    return n * fact(n-1);
}