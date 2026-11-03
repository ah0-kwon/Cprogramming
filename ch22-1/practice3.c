// **********************************************
// 제  목  :  22-1 실습과제3 소스코드
// 날  짜  :  2026년 11월3일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
struct car {
	char model[20];
	char num[20];
	int mil;

};
int main(void)
{
	struct car c;
	printf("모델을 입력하시오: ");
	scanf("%s", &c.model);
	getchar();
	printf("번호판을 입력하시오: ");
	scanf("%s", &c.num);
	printf("주행거리를 입력하시오: ");
	scanf("%d", &c.mil);

	printf("1.모델: %s\n", c.model);
	printf("2.번호판: %s\n", c.num);
	printf("3.주행거리: %d km\n", c.mil);
	return 0;
}
