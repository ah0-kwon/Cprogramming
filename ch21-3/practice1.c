// **********************************************
// 제  목  :  21-3 실습과제1 소스코드
// 날  짜  :  2026년 10월30일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[100] = "";
	char str2[100];

	while (1)
	{
		fputs("문자열 입력: ", stdout);
		fgets(str2, sizeof(str2), stdin);
		str2[strcspn(str2, "\n")] = '\0';

		if (strcmp(str2, "quit") == 0)
		{
			break;
		}
		if (strlen(str1) > 0)
		{
			strcat(str1, " ");
		}
		strcat(str1, str2);
		fputs("입력된 문자열: ", stdout);
		puts(str1);
	}
	return 0;
}
