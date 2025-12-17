/*
	Source_25_11_27_3.c
	로또게임 만들기 - 수동/자동 번호 생성과 추첨, 보너스 생성 예제입니다.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _lotto{
	int number[6];
	int bonus;
	int NO;
}LOTTO;

void initLotto(LOTTO* l){
	for(int i=0;i<6;i++) l->number[i] = 0;
	l->bonus = 0;
	l->NO = 0;
}

int dup(LOTTO l, int num, int last){
	for(int i=0;i<=last;i++){
		if(l.number[i] == num) return 1;
	}
	return 0;
}

LOTTO createManual(int NO){
	LOTTO l;
	int num;
	initLotto(&l);
	l.NO = NO;
	for(int i=0;i<6;i++){
		printf("input number #%d : ", i+1);
		scanf("%d", &num);
		if(i==0) l.number[i] = num;
		else if(i>0 && !dup(l, num, i-1)) l.number[i] = num;
		else{
			i--;
			printf("중복발생.. 다시 뽑으세요..\n");
		}
	}
	return l;
}

void printLotto(LOTTO l){
	printf("#%d lotto number : %2d, %2d, %2d, %2d, %2d, %2d\n", l.NO,
		l.number[0], l.number[1], l.number[2], l.number[3], l.number[4], l.number[5]);
	printf("BONUS : %d\n", l.bonus);
}

int matchCount(LOTTO l1, LOTTO l2){
	int mcount = 0;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			if(l1.number[i] == l2.number[j]) mcount++;
		}
	}
	return mcount;
}

LOTTO createAuto(int NO){
	LOTTO l;
	int num;
	initLotto(&l);
	l.NO = NO;
	for(int i=0;i<6;i++){
		num = rand() % 45 + 1;
		if(i==0) l.number[i] = num;
		else if(i>0 && !dup(l, num, i-1)) l.number[i] = num;
		else i--;
	}
	return l;
}

LOTTO drawingLotto(){
	LOTTO l;
	int num;
	initLotto(&l);
	for(int i=0;i<6;i++){
		num = rand() % 45 + 1;
		if(i==0) l.number[i] = num;
		else if(i>0 && !dup(l, num, i-1)) l.number[i] = num;
		else i--;
	}
	do{
		l.bonus = rand() % 45 + 1;
	}while(dup(l, l.bonus, 5));
	return l;
}

int main()
{
	LOTTO l1, l2;
	FILE* fp;
	int count;

	fp = fopen("20251018.bin", "rb");
	if(fp == NULL) exit(1);
	fread(&l1, sizeof(LOTTO), 1, fp);
	fclose(fp);

	srand((unsigned)time(NULL));
	l2 = drawingLotto();
	count = matchCount(l1, l2);

	printLotto(l1);
	printLotto(l2);
	printf("match : %d\n", count);

	return 0;
}
