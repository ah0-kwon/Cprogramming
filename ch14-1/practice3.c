// **********************************************
// 제  목  :  14-1 실습과제3 소스코드
// 날  짜  :  2026년 9월22일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 

#include <stdio.h>

int add2(int value);   // 함수 선언

int main(void)
{
    int number;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    number = add2(number);   // 함수 호출

    printf("2만큼 증가한 값: %d\n", number);
    return 0;
}

int add2(int value)   // 함수 정의
{
    value += 2;
    return value;
}
