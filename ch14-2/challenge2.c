// **********************************************
// 제  목  :  15장 도전과제2 소스코드
// 날  짜  :  2026년 9월29일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031) 
#include <stdio.h>
int main(void)
{
    int n;
    int bin[50];
    int i = 0;
    int j;
    printf("10진수 정수 입력: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("2진수: 0\n");
    }
    else
    {
        while (n > 0)
        {
            bin[i] = n % 2;
            n = n / 2;
            i++;
        }

        printf("2진수: ");
        for (j = i - 1; j >= 0; j--)
        {
            printf("%d", bin[j]);
        }

        printf("\n");
    }
    return 0;
}
