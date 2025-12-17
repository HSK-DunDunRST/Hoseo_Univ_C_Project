/*
    Source_25_05_12_1.c
    입력 문자열을 동적 할당해 길이를 출력하고 모든 회전 조합을 보여 준다.
 */

#include <stdio.h>   // 표준 입출력 함수 사용을 위한 헤더 파일
#include <stdlib.h>  // 동적 메모리 할당 및 해제를 위한 헤더 파일
#include <string.h>  // 문자열 처리 함수 사용을 위한 헤더 파일
#include <ctype.h>   // 문자 분류 함수 사용을 위한 헤더 파일
int main() {
    char temp[100];  // 임시로 입력받을 배열 (최대 100자 입력 가능)

    printf("Input the message >> ");  // 사용자에게 메시지 입력 요청
    fgets(temp, sizeof(temp), stdin); // 입력받은 문자열을 temp 배열에 저장 (최대 99자 + NULL 문자)

    // 개행 문자 제거 (fgets로 입력받을 때 문자열 끝에 개행 문자가 포함될 수 있음)
    temp[strcspn(temp, "\n")] = '\0';

    // 입력받은 문자열 길이만큼 동적 메모리 할당 (+1은 NULL 문자 '\0'을 위한 공간)
    char *str = (char *)malloc(strlen(temp) + 1);
    if (str == NULL) {  // 메모리 할당 실패 시
        printf("메모리 할당 실패\n");
        return 1;  // 프로그램 종료
    }

    strcpy(str, temp);  // 입력받은 문자열을 동적 메모리로 복사

    int len = strlen(str);  // 문자열의 길이 계산
    printf("message's lenth: %d\n", len);
    for (int i = 0; i < len; i++) {  // 문자열의 각 회전 상태를 출력하기 위한 반복문
        for (int j = 0; j < len; j++) {  // 현재 회전 상태의 각 문자 출력
            printf("%c", str[(i + j) % len]);  // 회전된 문자열의 인덱스를 계산하여 출력
        }
        printf("\n");  // 한 줄 출력 후 줄바꿈
    }

    free(str);  // 동적 메모리 해제 (메모리 누수 방지)
    return 0;  // 프로그램 정상 종료
}
