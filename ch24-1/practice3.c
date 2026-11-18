// **********************************************
// 제  목  :  24-1 실습과제3 소스코드
// 날  짜  :  2026년 11월18일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void) 
{
    int ch;
    FILE* fp = fopen("result.txt", "wt");

    if (fp == NULL) 
    {
        printf("파일 열기 실패\n");
        return -1;
    }

    printf("문자열을 입력하시오: ");
    while (1) 
    {
        ch = getchar();
        if (ch == '\n' || ch == EOF)
            break;
        if (ch == ' ')
            fputc('\n', fp);
        else
            fputc(ch, fp);
    }

    fclose(fp);
    return 0;
}
