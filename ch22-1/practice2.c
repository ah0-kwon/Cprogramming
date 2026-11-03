// **********************************************
// 제  목  :  22-1 실습과제2 소스코드
// 날  짜  :  2026년 11월3일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
struct student {
	int num;
	char name[20];
	char add[100];
};
int main(void)
{
	struct student s;
	printf("학번을 입력하시오: ");
	scanf("%d", &s.num);
	printf("이름을 입력하시오: ");
	scanf("%s", &s.name);
	getchar();
	printf("주소를 입력하시오: ");
	fgets(s.add, sizeof(s.add), stdin);

	printf("1.학번: %d\n", s.num);
	printf("2.이름: %s\n", s.name);
	printf("3.주소: %s\n", s.add);
	return 0;
}
