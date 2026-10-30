// **********************************************
// 제  목  :  21-3 실습과제5 소스코드
// 날  짜  :  2026년 10월30일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[5][100];
    int fst = 0, lst =0;
    int i = 0;

    for (i=1; i<5; i++)
    {
        printf("문자열 입력: ");
        scanf("%s", str[i]);
    }
    for (i=1; i<5; i++)
    {
        if (strcmp(str[i], str[fst]) < 0)
            fst = i;
        if (strcmp(str[i], str[lst]) > 0)
            lst = i;
    }
    printf("제일앞: %s \n", str[fst]);
    printf("제일뒤: %s \n", str[fst]);
    return 0;
}
