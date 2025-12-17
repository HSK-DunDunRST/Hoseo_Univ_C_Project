/*
    Source_25_04_10_1.c
    입력받은 정수 N에 따라 다양한 형태의 별 패턴을 순차적으로 출력한다.
 */

#include <stdio.h>

int main(){

    int n = 0;
    
    printf("정수 입력: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("===============\n");

    for(int i = 0; i< n; i++){
        for(int j = n; j > i; j--){
            printf("*");
        }
        printf("\n");
    }

    printf("===============\n");

    for(int i = 0; i < n; i++){
        // 공백 출력
        for(int j = 0; j < n-1-i; j++){
            printf(" ");
        }
        // 별 출력
        for(int k = 0; k < i+1; k++){
            printf("*");
        }

        printf("\n");
    }

    printf("=============\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1 - i; j++){
            printf(" ");
        }
        
        for(int k = 0; k < n + 2 + (i *2); k++){
            printf("*");
        }

        printf("\n");
    }


    return 0;
}