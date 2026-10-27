// **********************************************
// 제  목  :  21-2 실습과제5 소스코드
// 날  짜  :  2026년 10월27일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
int main(void)
{
	char str[100];
	int i, cnt = 1;
	printf("문자열입력: ");
	fgets(str, sizeof(str), stdin);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			cnt += 1;
		}
	}
	printf("단어수: %d", cnt);
	return 0;
}
