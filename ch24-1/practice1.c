// **********************************************
// 제  목  :  24-1 실습과제1 소스코드
// 날  짜  :  2026년 11월17일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
    char src[100];
    char dst[100];
    FILE* fp_in;
    FILE* fp_out;
    int ch;

    printf("복사할 파일명: ");
    scanf("%s", src);
    printf("복사받을 파일명: ");
    scanf("%s", dst);

    fp_in = fopen(src, "r");
    if (fp_in == NULL) {
        printf("원본 파일을 열 수 없습니다.\n");
        return 1;
    }

    fp_out = fopen(dst, "w");
    if (fp_out == NULL) {
        printf("대상 파일을 열 수 없습니다.\n");
        fclose(fp_in);
        return 1;
    }

    while ((ch = fgetc(fp_in)) != EOF) {
        fputc(ch, fp_out);
    }
    fclose(fp_in);
    fclose(fp_out);

    printf("%s 파일을 %s 파일로 복사했습니다.\n", src, dst);
    return 0;
}
