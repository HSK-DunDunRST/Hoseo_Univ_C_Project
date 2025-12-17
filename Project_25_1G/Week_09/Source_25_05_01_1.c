/*
    Source_25_05_01_1.c
    문자 분류 함수를 사용해 알파벳 여부와 숫자 여부를 확인하고 소문자로 변환한다.
 */

#include <stdio.h>
#include <ctype.h>

// ch12 - 문자 분류 함수
int main(){
    char ch1 = '1';
    char ch2 = 'A';

    // issupper(c) 또는 islower(c)가 만족되는 경우
    if(isalpha(ch2))
        printf("%c는 문자입니다.\n", ch2);
    // 문자 c가 숫자면 참(True)를 반환
    if(isdigit(ch1))
        printf("%c는 숫자입니다.\n", ch1);
    // 문자 c를 소문자로 변환
    printf("소문자 %c\n", tolower(ch2));

    return 0;
}