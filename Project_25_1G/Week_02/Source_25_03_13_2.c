/* 
	Source_25_03_13_2.c
	정수형 상수 출력하기
*/

#include <stdio.h>

void main() {
	// 출력 형식 문자가 %f(실수형)이지만 정수형 상수를 출력하면 정상적으로 출력되지 않음(주의 경고 표시됨.)
	printf("정수형 상수: %f\n", 15);
	printf("실수형 상수: %f\n", 0.1254);
	// 소수점 지정하면 버림이 아니라 반올림이 됨.
	printf("실수형 반올림 상수 : %.2f\n", 0.1254);

	// 실수 값을 정수 부분만 출력하고 싶을 경우, .0f를 사용하면 소수점 첫쨰자리에서 반올림 된다.
	printf("%.0f\n", 0.64);
	printf("%.1f\n", 0.4223);
	printf("%.2f\n", 12.6732);
	printf("%.3f\n", 0.1254);

	// 정수 사칙 연산
	int a = 9;
	int b = 5;

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);	

	// 실수 사칙 연산
	float c = 12.6;
	float d = 7.8;

	printf("%.2f + %.2f = %.2f\n", c, d, c + d);
	printf("%.2f - %.2f = %.2f\n", c, d, c - d);
	printf("%.2f * %.2f = %.2f\n", c, d, c * d);
	printf("%.2f / %.2f = %.2f\n", c, d, c / d);
}