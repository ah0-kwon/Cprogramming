// **********************************************
// 제  목  :  17-1 실습과제4 소스코드
// 날  짜  :  2026년 10월6일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 
#include <stdio.h>
void MaxAndMin(int** maxPtr, int** minPtr, int arr[])
{
    int i;
    *maxPtr = &arr[0];
    *minPtr = &arr[0];
    for (i = 1; i < 5; i++)
    {
        if (**maxPtr < arr[i])
            *maxPtr = &arr[i];
        if (**minPtr > arr[i])
            *minPtr = &arr[i];
    }
}

int main(void)
{
    int* maxPtr;
    int* minPtr;
    int arr[5];
    int i;

    printf("5개의 정수 입력: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    MaxAndMin(&maxPtr, &minPtr, arr);
    printf("최댓값: %d\n", *maxPtr);
    printf("최솟값: %d\n", *minPtr);
    return 0;
}

