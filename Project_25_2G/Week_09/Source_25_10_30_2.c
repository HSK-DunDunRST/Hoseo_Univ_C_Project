/*
	Source_25_10_30_2.c
    커스텀 getline 함수로 최대 길이를 지정해 여러 줄을 읽어 파일에 저장하는 예제.
 */

#include <stdio.h>

int my_getline(char *line, int maxlen)
{
	int ch;
	int i = 0;

	while (i < maxlen - 1 && (ch = getchar()) != EOF && ch != '\n') {
		line[i++] = (char)ch;
	}

	if (ch == '\n' && i < maxlen - 1) {
		line[i++] = '\n';
	}

	line[i] = '\0';
	return i;
}

int main(void)
{
	char input[100];
	FILE *fp;

	if ((fp = fopen("output.txt", "w")) == NULL) {
		printf("error...\n");
		return 1;
	}

	for (int i = 0; i < 5; i++) {
		int len = my_getline(input, (int)sizeof input);
		if (len <= 0) { 
			break;
		}
		fputs(input, fp);
	}

	fclose(fp);
	return 0;
}
