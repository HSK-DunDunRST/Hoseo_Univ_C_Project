/*
    Source_25_11_13_2.c
    동적할당 실습 #3 - 구조체 배열을 만들고 메뉴 입력을 처리하는 기본 골격입니다.
 */

/*************************************************************
 * 동적할당 실습 #3 - 동적할당 응용하기                       *
 *************************************************************/

 #include <stdio.h>
#include <stdlib.h>

typedef struct point{
	int x;
	int y;
}POINT;

int inputMenu(void){
	int input;
	printf("메뉴입력(1.구조체 만들기, 2. 구조체 출력하기, -1. 종료) : ");
	scanf("%d", &input);
	return input;
}

int main()
{
	int menu;

	do{
		menu = inputMenu();
	}while(menu > 0);

	return 0;
}
