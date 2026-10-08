// **********************************************
// 제  목  :  20장 도전과제1 소스코드
// 날  짜  :  2026년 10월8일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
void PrintArray(int arr[4][4]) 
{
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void Rotate90(int arr[4][4]) 
{
    int temp[4][4];
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            temp[i][j] = arr[3 - j][i];
        }
    }
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            arr[i][j] = temp[i][j];
        }
    }
}
int main(void) 
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16} };
    printf("== 원본 배열 ==\n");
    PrintArray(arr);
    for (int i = 1; i <= 3; i++) {
        Rotate90(arr);
        printf("== %d도 회전 ==\n", i * 90);
        PrintArray(arr);
    }
    return 0;
}
