/*
    Source_25_05_29_2.c
    입력 문자열의 알파벳을 두 자리 숫자 코드로 변환해 출력한다.
 */

#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    char encryted[512];

    fgets(str,sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    for(int index = 0; index < strlen(str); index++){
        if(str[index] >= 'A' && str[index] <= 'Z'){
            int code = str[index] - 'A' +1;
            char codeChar[5] = {0,};
            sprintf(encryted, "%02d", code);
            strcat(encryted, codeChar);
        } else if(str[index] >= 'a' && str[index] <= 'z'){
            int code = str[index] - 'a' + ('Z' - 'A') +1;
            char codeChar[5] = {0,};
            sprintf(encryted, "%02d", code);
            strcat(encryted, codeChar);
        }
    }

    for(int i = 0 ; i < encryted[i] != 0; i++){
        printf("%c", encryted[i]);
    }

    return 0;
}