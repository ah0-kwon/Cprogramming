// **********************************************
// 제  목  :  13-1 실습과제4 소스코드
// 날  짜  :  2026년 9월11일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    int arr[5]; 
    int* ptr = arr;
    int i;

    printf("5개의 정수를 입력하세요:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]); 
    }

    for (i = 0; i < 5; i++)
    {
        *ptr += 2;
        ptr++;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
