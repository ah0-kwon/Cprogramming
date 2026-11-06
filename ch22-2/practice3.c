// **********************************************
// 제  목  :  22-2 실습과제3 소스코드
// 날  짜  :  2026년 11월5일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
struct student {
	char name[20];
	int grade;
};
int main(void)
{
	struct student s[3];
	struct student* p;
	p = s;
	int i, fst = 0;
	for (i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%s", (p + i)->name);
		printf("성적을 입력하시오: ");
		scanf("%d", &(p + i)->grade);
	}
	for (i = 1; i < 3; i++)
	{
		if (strcmp((p + i)->name, (p + fst)->name) < 0)
			fst = i;
	}
	printf("이름은 %s, 점수는 %d점", (p + fst)->name, (p + fst)->grade);
	return 0;
}
