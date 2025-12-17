/*
    Source_25_05_26_2.c
    두 문자열을 입력받아 사전순 비교 결과를 출력한다.
 */

#include <stdio.h>

int main(){

    while(1){

        char str1[256] = {0};
        char str2[256] = {0};
        int len_str1 = 0;
        int len_str2 = 0;

        gets(str1);
        gets(str2);

        while(str1[len_str1] != 0 || str2[len_str2] != 0){
            len_str1++;
            len_str2++;
        }

        if(len_str1 == 0 || len_str2 ==0) break;

        int i = 0;
        while (str1[i] != '\0' && str2[i] != '\0') {
            if (str1[i] < str2[i]) {
                printf("1\n");
                break;
            } else if (str1[i] > str2[i]) {
                printf("-1\n");
                break;
            } else if(str1[i] == str2[i]){
                printf("0\n");
                break;
            }
            i++;
        }
    }

    return 0;
}
