// **********************************************
// 제  목  :  24-1 실습과제2 소스코드
// 날  짜  :  2026년 11월18일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
    FILE* fp;
    int ch;

    fp = fopen("test.txt", "rt");
    if (fp == NULL) {
        puts("파일 열기 실패");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '.') {
            printf(".\n");
        }
        else {
            printf("%c", ch);
        }
    }

    fclose(fp);
    return 0;
}
