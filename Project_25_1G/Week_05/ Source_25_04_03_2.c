/*
    Source_25_04_03_2.c
    시작 값에서 1까지 감소하는 숫자 패턴을 줄마다 출력한다.
 */

#include <stdio.h>

int main() {

    for (int i = 5; i > 0; i--) { // 점점 작아지는 크기로 반복
        for (int j = i; j > 0; j--) { // 숫자 출력
            printf("%d", j);
        }
        printf("\n"); // 줄바꿈
    }

    return 0;
}