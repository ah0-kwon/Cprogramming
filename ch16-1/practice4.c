// **********************************************
// 제  목  :  16-1 실습과제4 소스코드
// 날  짜  :  2026년 10월2일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
int main(void) 
{
	char str[4][10];
	int i, j;
	int cnt = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	for (i = 0; i < 4; i++)
	{
		cnt = 0;
		for (j = 0; str[i][j] != '\0'; j++)
		{
			cnt++;
		}
		printf("%d번째 문자열 길이: %d\n", i + 1, cnt);
	}
	return 0;
}
