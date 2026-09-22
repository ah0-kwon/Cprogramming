#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 

#include <stdio.h>

// 함수 선언
void swap(int *px, int *py, int *pz);

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

    // 함수 호출
    swap(&x, &y, &z);
    printf("swap함수 호출 후 x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}

// 함수 정의
void swap(int *px, int *py, int *pz) 
{
    int tmp;
    tmp = *px;  
    *px = *py;  
    *py = *pz;  
    *pz = tmp;   
}
