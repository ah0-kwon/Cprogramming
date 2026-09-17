// **********************************************
// 제  목  :  13-2 실습과제4 소스코드
// 날  짜  :  2026년 9월17일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>

int main(void)
{
    char a1[100];
    char a2[100];
    printf("문자열을 입력하시오: ");
    scanf("%s", a1);
    printf("문자열을 입력하시오: ");
    scanf("%s", a2);

    if (a1[0] < a2[0])
    {
        printf("사전에서 앞에 나오는 문자열: %s\n", a1);
        return 0;
    }
    else if (a1[0] > a2[0])
    {
        printf("사전에서 앞에 나오는 문자열: %s\n", a2);
        return 0;
    }     
    return 0;
}
