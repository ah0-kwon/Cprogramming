// **********************************************
// 제  목  :  16-1 실습과제5 소스코드
// 날  짜  :  2026년 10월2일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[4][10];
    int i;
    int last = 0;

    for (i = 0; i < 4; i++)
    {
        printf("%d번째 문자열 입력: ", i + 1);
        scanf("%s", str[i]);
    }
    for (i = 1; i < 4; i++)
    {
        if (str[i][0] > str[last][0])
        {
            last = i;
        }
    }
    printf("사전에서 제일 뒤에 나오는 문자열: %s\n", str[last]);
    return 0;
}
