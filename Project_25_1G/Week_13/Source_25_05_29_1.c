/*
    Source_25_05_29_1.c
    입력 문자열의 알파벳 빈도를 계산해 각 문자별 등장 횟수를 출력한다.
*/

#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int count;
    int len = 0;

    fgets(str,sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    len = sizeof(str);
    int i = 0;
    while (i < len && str[i] != '\0') {
        count = 1;
        for (int j = i + 1; j < len && str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                    count++;
            }
        }
        printf("%c: %d\n", str[i], count);

        for (int j = i + 1; j < len && str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                    for (int k = j; k < len - 1; k++) {
                        str[k] = str[k + 1];
                    }
                    str[len - 1] = '\0';
                    j--;
            }
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}