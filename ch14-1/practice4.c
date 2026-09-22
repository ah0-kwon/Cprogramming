// **********************************************
// 제  목  :  14-1 실습과제4 소스코드
// 날  짜  :  2026년 9월22일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 

#include <stdio.h>

void swap(int *px, int *py, int *pz);   // 함수 선언

int main() 
{
    int x, y, z;
    printf("정수x를 입력 하시오: ");
    scanf("%d", &x);
    printf("정수y를 입력 하시오: ");
    scanf("%d", &y);
    printf("정수z를 입력 하시오: ");
    scanf("%d", &z);
    
    printf("swap함수 호출 전 x=%d, y=%d, z=%d\n", x, y, z);
    swap(&x, &y, &z);   // 함수 호출
    printf("swap함수 호출 후 x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}

void swap(int *px, int *py, int *pz)   // 함수 정의
{
    int tmp;
    tmp = *px;  
    *px = *py;  
    *py = *pz;  
    *pz = tmp;   
}
