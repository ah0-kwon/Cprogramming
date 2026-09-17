// **********************************************
// 제  목  :  13-2 실습과제2 소스코드
// 날  짜  :  2026년 9월17일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>

int main(void)
{
	char a[100];
	printf("문자열을 입력하시오: ");
	scanf("%s", a);
	for (int i = 0; a[i] != '\0'; i++)
	{
		printf("%d번째 문자: %c \n", i + 1, a[i]);
	}
	return 0;
}
