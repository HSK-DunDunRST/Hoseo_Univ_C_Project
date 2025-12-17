/*
    Source_25_05_15_1.c
    입력 문자열이 회문인지 반복 확인하고 결과를 출력한다.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;

    while (1) {
        int isPalindrome = 1;

        printf("문자열을 입력하세요 >> ");
        if (fgets(str, sizeof(str), stdin) == NULL) {
            break;
        }

        // Remove newline character
        str[strcspn(str, "\n")] = '\0';

        // Exit if input is empty
        if (strlen(str) == 0) {
            break;
        }

        len = strlen(str);

        for (i = 0; i < len / 2; i++) {
            if (str[i] != str[len - 1 - i]) {
                isPalindrome = 0;
                break;
            }
        }

        if (isPalindrome)
            printf("회문입니다.\n");
        else
            printf("회문이 아닙니다.\n");
    }

    return 0;
}