// **********************************************
// 제  목  :  24-3 실습과제2 소스코드
// 날  짜  :  2026년 11월24일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
    FILE* fp = fopen("b.bin", "rb");

    if (fp == NULL)
    {
        puts("파일 오픈 실패");
        return -1;
    }

    int num[10];

    if (fread(num, sizeof(int), 10, fp) != 10)
    {
        puts("파일 읽기 실패");
        fclose(fp);
        return -1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    fclose(fp);
    return 0;
}
