// **********************************************
// 제  목  :  21-1 실습과제5 소스코드
// 날  짜  :  2026년 10월13일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
int main(void)
{
    char str[20];
    int i = 0;
    printf("문자열을 입력하시오 : ");

    while (i < 19)
    {
        scanf("%c", &str[i]);
        if (str[i] == '\n')
            break;
        i++;
    }

    str[i] = '\0';
    printf("문자열: %s \n", str);
    return 0;
}
