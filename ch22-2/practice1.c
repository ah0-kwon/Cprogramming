// **********************************************
// 제  목  :  22-2 실습과제1 소스코드
// 날  짜  :  2026년 11월6일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
struct student {
	char name[20];
	int grade;
};
int main(void)
{
	struct student s[3];
	int i, max = 0;
	for (i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%s", s[i].name);
		printf("성적을 입력하시오: ");
		scanf("%d", &s[i].grade);
	}
	for (i = 1; i < 3; i++)
	{
		if (s[max].grade < s[i].grade)
			max = i;
	}
	printf("최우수학생의 이름은 %s, 점수는 %d점", s[max].name, s[max].grade);
	return 0;
}
