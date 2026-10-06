// **********************************************
// 제  목  :  17-1 실습과제3 소스코드
// 날  짜  :  2026년 10월6일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 
#include <stdio.h>
void prn_str(char* ptrarr[], int count);
int main(void)
{
	char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;
	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);
	return 0;
	}
void prn_str(char* ptrarr[], int count)
{
	int i;

	for (i = 0; i < count; i++)
		printf("%s\n", ptrarr[i]);
}
