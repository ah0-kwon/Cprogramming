// **********************************************
// 제  목  :  21-2 실습과제2 소스코드
// 날  짜  :  2026년 10월27일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
int main(void)
{
	int ch;

	while (1)
	{
		printf("문자입력: ");
		ch = getchar();
		getchar();
		if (ch == 'q' || ch == 'Q')
			break;
		printf("입력된 문자: ");
		putchar(ch);
		printf("\n");
	}
	return 0;
}
