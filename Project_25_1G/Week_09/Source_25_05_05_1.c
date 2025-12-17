/*
    Source_25_05_05_1.c
    두 팀의 점수 배열을 출력해 점수 현황을 보여준다.
 */

#include <stdio.h>

int main(){
    int koreaScore[] = {15, 17, 27, 32};
    int chinaScore[] = {27, 16, 19, 11};

    printf("한국팀 점수: ");
    for(int i = 0; i < sizeof(koreaScore) / sizeof(int); i++){
        printf("%d ", koreaScore[i]);
    }
    printf("\n");

    printf("중국팀 점수: ");
    for(int i = 0; i < sizeof(chinaScore)/ sizeof(int); i++){
        printf("%d ", chinaScore[i]);
    }
    printf("\n");
    
    return 0;
}