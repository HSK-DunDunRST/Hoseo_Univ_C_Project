/*
	Source_25_11_13_4.c
	동적할당 실습 #3 - 메뉴를 통해 구조체를 생성/출력/정리하는 예제입니다.
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

POINT* makePoint(void);
void printPoint(POINT* points[], int count);
void freePoints(POINT* points[], int count);

int inputMenu(void){
	int input;
	printf("메뉴입력(1.구조체 만들기, 2. 구조체 출력하기, -1. 종료) : ");
	scanf("%d", &input);
	return input;
}

POINT* makePoint(void){
	POINT* p = (POINT*)malloc(sizeof(POINT));
	if(p == NULL) exit(-1);
	printf("x y 입력: ");
	scanf("%d %d", &p->x, &p->y);
	return p;
}

void printPoint(POINT* points[], int count){
	for(int i=0;i<count;i++){
		if(points[i] != NULL)
			printf("point[%d] = x:%d, y:%d\n", i, points[i]->x, points[i]->y);
	}
}

void freePoints(POINT* points[], int count){
	for(int i=0;i<count;i++){
		if(points[i] != NULL){
			free(points[i]);
			points[i] = NULL;
		}
	}
}

int main()
{
	int menu;
	int count = 0;
	POINT* points[100];

	do{
		menu = inputMenu();
		switch(menu){
		case 1:
			points[count] = makePoint();
			count++;
			break;
		case 2:
			printPoint(points, count);
			break;
		case 3:
			system("clear"); // Windows는 system("cls")
			break;
		case -1:
			freePoints(points, count);
			printf("프로그램을 종료합니다.\n");
			break;
		}
	}while(menu > 0);

	return 0;
}
