// **********************************************
// 제  목  :  23-1 실습과제2 소스코드
// 날  짜  :  2026년 11월10일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
typedef struct student {
	char name[20];
	int grade;
}Student;
void get_data(Student* s);
Student get_best(Student* s);
int main(void)
{
	Student s[3];
	Student max;
	get_data(s);
	max = get_best(s);
	printf("최우수학생의 이름은 %s, 점수는 %d점\n", max.name, max.grade);
	return 0;
}
void get_data(Student* s)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%s", s[i].name);
		printf("성적을 입력하시오: ");
		scanf("%d", &s[i].grade);
	}
}
Student get_best(Student* s)
{
	int i, max = 0;
	for (i = 1; i < 3; i++)
	{
		if (s[i].grade > s[max].grade)
			max = i;
	}
	return s[max];
}
