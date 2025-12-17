/*
    Source_25_05_15_2.c
    1부터 100 사이의 중복 없는 난수를 생성해 배열에 채운 뒤 출력한다.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_num[100] = {0};
    int num, duplicate;

    srand(time(NULL));
    for(int i = 0; i < 100;) {
        num = rand() % 100 + 1;
        duplicate = 0;
        for(int j = 0; j < i; j++) {
            if(random_num[j] == num) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate) {
            random_num[i] = num;
            i++;
        }
    }

    for(int i = 0; i < 100; i++)
        printf("%d ", random_num[i]);

    return 0;
}