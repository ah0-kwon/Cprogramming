// **********************************************
// 제  목  :  21-1 실습과제2 소스코드
// 날  짜  :  2026년 10월13일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
int main(void)
{
	char ch;
	while (1)
	{
		printf("문자입력: ");
		scanf(" %c", &ch);
		if (ch == 'q' || ch == 'Q')
			break;
		else
			printf("입력된 문자는 %c \n", ch);
	}
	return 0;
}
