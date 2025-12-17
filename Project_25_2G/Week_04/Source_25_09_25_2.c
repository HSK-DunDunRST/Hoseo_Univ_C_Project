#include <stdio.h>

int main(){

    int ch;
    char message[100];
    int i = 0;

    while((ch = getchar()) != '\n' && ch != EOF){
        message[i++] = (char)ch;
    }
    message[i] = '\0';
    printf("%s", message);

    return 0;
}