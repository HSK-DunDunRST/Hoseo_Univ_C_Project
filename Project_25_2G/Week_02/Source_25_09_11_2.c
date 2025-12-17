/*
	Source_25_09_11_2.c
    포인터를 이용해 변수의 주소와 값을 출력하는 예제이다.
 */


#include <stdio.h>

int main(){
    int i = 10;
    int* p;
    p  = &i;

    printf("i = %d\n", i);
    printf("address of i = %p\n", &i);
    printf("*p = %d\n", *p);

}