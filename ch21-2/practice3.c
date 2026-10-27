// **********************************************
// 제  목  :  21-2 실습과제3 소스코드
// 날  짜  :  2026년 10월27일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
int main(void)
{
	char name[10];
	char add[20];
	char car[20];

	fputs("이름: ", stdout);
	fgets(name, sizeof(name), stdin);
	fputs("주소: ", stdout);
	fgets(add, sizeof(add), stdin);
	fputs("자동차 번호: ", stdout);
	fgets(car, sizeof(car), stdin);

	puts("<결과출력>");
	fputs("이름: ", stdout);
	fputs(name, stdout);
	fputs("주소: ", stdout);
	fputs(add, stdout);
	fputs("자동차 번호: ", stdout);
	fputs(car, stdout);

	return 0;
}
