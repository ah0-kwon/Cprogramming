// **********************************************
// 제  목  :  15장 도전과제1 소스코드
// 날  짜  :  2026년 9월29일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031) 
#include <stdio.h>
void odd(int arr[], int size);
void even(int arr[], int size);
int main(void)
{
    int arr[10];
    int i;

    printf("10개의 정수 입력\n");

    for (i = 0; i < 10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    odd(arr, 10);
    even(arr, 10);

    return 0;
}
void odd(int arr[], int size)
{
    int i;

    printf("홀수 출력: ");

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    printf("\n");
}
void even(int arr[], int size)
{
    int i;

    printf("짝수 출력: ");

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\n");
}
