/*
	Source_25_10_02_2.c
    입력 문자열을 읽어 소문자 a~z의 출현 횟수를 세고 출력하는 예제.
 */

#include <stdio.h>

int main()
{
    char input[200] = "";
    int count[26] = {0};
    int ch;
    int i = 0;

    while ((ch = getchar()) != EOF) {
        input[i++] = ch;
    }

    i = 0;
    while (input[i] != '\0') {
        if (input[i] >= 'a' && input[i] <= 'z') {
            count[input[i] - 'a']++;
        }
        i++;
    }

    printf("입력문자열 : %s\n", input);
    for (int i = 0; i < 26; i++)
        printf("%c 출현횟수 : %d\n", 'a' + i, count[i]);

    return 0;
}