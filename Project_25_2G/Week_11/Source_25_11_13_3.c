/*
    Source_25_11_13_3.c
    동적할당 실습 #3 - 메뉴를 통해 구조체를 만들고 출력하는 골격 코드입니다.
 */

/*************************************************************
 * 동적할당 실습 #3 - 동적할당 활용하기                       *
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
	POINT* points[100];

	do{
		menu = inputMenu();
		if(menu == 1){
			// 구조체 만들기
		}
		else if(menu == 2){
			// 구조체 출력하기
		}
		else if(menu == -1){
			printf("프로그램을 종료합니다.\n");
		}
	}while(menu > 0);

	return 0;
}
