// **********************************************
// 제  목  :  21-3 실습과제4 소스코드
// 날  짜  :  2026년 10월30일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
void my_strcat (char dest[], char src[]);
int main(void)
{
    char str1[20] = "First~";
    char str2[20] = "Second";
    my_strcat(str1, str2);
    puts(str1);
    return 0;
}
void my_strcat (char dest[], char src[])
{
    int i=0, j=0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}
