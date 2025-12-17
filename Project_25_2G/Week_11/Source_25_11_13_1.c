/*
    Source_25_11_13_1.c
    동적 메모리로 int 배열을 만들고 char 포인터로 재해석하는 예제입니다.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pArray;
	char* pChar;
	int count;

	scanf("%d", &count);
	pArray = (int*)malloc(sizeof(int) * count);

	for(int i=0;i<count;i++)
		pArray[i] = i;

	for(int i=0;i<count;i++)
		printf("%d ", pArray[i]);

	pChar = (char*)pArray;

	while(getchar() != '\n');

	gets(pChar);
	puts(pChar);

	return 0;
}
