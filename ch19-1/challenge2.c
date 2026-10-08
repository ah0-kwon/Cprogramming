// **********************************************
// 제  목  :  20장 도전과제2 소스코드
// 날  짜  :  2026년 10월8일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
int main(void) 
{
    int n;
    int arr[100][100] = { 0 }; 
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);
    int dx[] = { 0, 1, 0, -1 };
    int dy[] = { 1, 0, -1, 0 };
    int x = 0, y = 0; 
    int dir = 0;    

    for (int num = 1; num <= n * n; num++) 
    {
        arr[x][y] = num; 
        int next_x = x + dx[dir];
        int next_y = y + dy[dir];
        if (next_x < 0 || next_x >= n || next_y < 0 || next_y >= n || arr[next_x][next_y] != 0) 
        {
            dir = (dir + 1) % 4; 
            next_x = x + dx[dir];
            next_y = y + dy[dir];
        }
        x = next_x;
        y = next_y;
    }

    printf("\n== %d x %d 달팽이 배열 ==\n", n, n);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
