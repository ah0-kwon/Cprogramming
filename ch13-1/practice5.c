#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    int arr[5];
    int* ptr = arr;
    int* temp;
    int i;

    printf("5개의 정수를 입력하시오.\n");
    for (i = 0; i < 5; i++)
        scanf("%d", ptr + i);

    for (i = 0; i < 5; i++)
        *(ptr + i) += 2;

    // 배열표현
    printf("sum : ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");

    // 배열명을 이용한 주소표현
    printf("sum : ");
    for (i = 0; i < 5; i++)
        printf("%d ", *(arr + i));

    printf("\n");

    // 포인터 변수를 이용한 배열표현
    printf("sum : ");
    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    printf("\n");

    // 포인터 변수를 이용한 주소표현
    printf("sum : ");
    for (i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    printf("\n");

    // 증감연산자를 이용한 주소표현
    temp = ptr;

    printf("sum : ");
    for (i = 0; i < 5; i++)
        printf("%d ", *(temp++));

    printf("\n");

    return 0;
}
