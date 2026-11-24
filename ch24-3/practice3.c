// **********************************************
// 제  목  :  24-3 실습과제3 소스코드
// 날  짜  :  2026년 11월24일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
    FILE* fp1 = fopen("a.txt", "rb");
    FILE* fp2 = fopen("b.bin", "rb");
    int size1 = 0;
    int size2 = 0;
    int ch;

    if (fp1 == NULL || fp2 == NULL)
    {
        puts("파일 오픈 실패");
        return -1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        size1++;
    }

    while ((ch = fgetc(fp2)) != EOF)
    {
        size2++;
    }

    fclose(fp1);
    fclose(fp2);
    printf("a.txt의 파일 크기: %d바이트\n", size1);
    printf("b.bin의 파일 크기: %d바이트\n", size2);
    return 0;
}
