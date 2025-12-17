/*
    Source_25_12_04.c
    10진수 입력을 2진수로 변환 후 사칙연산 수행
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD 32

/* 입력된 10진수 문자열을 고정 길이 2진수 문자열로 변환 */
void getBinary(char *binary, const char *input, int word)
{
	int num = atoi(input);

	for (int i = word - 1; i >= 0; i--) {
		binary[i] = (num & 1) + '0';
		num >>= 1;
	}
	binary[word] = '\0';
}

/* 2진수 문자열을 10진수 정수로 변환 */
int bin2dec(const char *binary, int word)
{
	int value = 0;
	for (int i = 0; i < word; i++) {
		value = value * 2 + (binary[i] - '0');
	}
	return value;
}

int main(void)
{
	char input1[100];
	char input2[100];
	char op[10];

	char binary1[WORD + 1] = {0};
	char binary2[WORD + 1] = {0};

	int result = 0;
	int num1 = 0;
	int num2 = 0;

	printf("<<<<input>>>>>>\n");

	if (!fgets(input1, sizeof(input1), stdin)) return 1;
	if (!fgets(op, sizeof(op), stdin)) return 1;
	if (!fgets(input2, sizeof(input2), stdin)) return 1;

	/* 개행 제거 */
	input1[strcspn(input1, "\n")] = '\0';
	op[strcspn(op, "\n")] = '\0';
	input2[strcspn(input2, "\n")] = '\0';

	getBinary(binary1, input1, WORD);
	getBinary(binary2, input2, WORD);

	num1 = bin2dec(binary1, WORD);
	num2 = bin2dec(binary2, WORD);

	switch (op[0]) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if (num2 == 0) {
				printf("bad operator...\n");
				return 1;
			}
			result = num1 / num2;
			break;
		case '%':
			if (num2 == 0) {
				printf("bad operator...\n");
				return 1;
			}
			result = num1 % num2;
			break;
		default:
			printf("bad operator...\n");
			return 1;
	}

	printf("%s(%d) %c %s(%d) = %d\n", binary1, num1, op[0], binary2, num2, result);
	return 0;
}
