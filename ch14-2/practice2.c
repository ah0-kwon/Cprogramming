// **********************************************
// 제  목  :  14-2 실습과제2 소스코드
// 날  짜  :  2026년 9월29일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 
#include <stdio.h>

int get_max(int* array, int n);
int main(void)
{
	int grade[5];
	int i, max;
	printf("정수 5개를 입력하시오 \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &grade[i]);
	}
	max = get_max(grade, 5);
	printf("최대값은 %d입니다.\n", max);
	return 0;
}

int get_max(int* array, int n)
{
	int i, max;
	max = *array;
	for (i = 1; i < n; i++)
		if (*(array + i) > max) max = *(array + i);
	return max;
}
