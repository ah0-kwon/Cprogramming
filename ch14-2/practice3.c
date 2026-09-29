// **********************************************
// 제  목  :  14-2 실습과제3 소스코드
// 날  짜  :  2026년 9월29일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 
#include <stdio.h>
void get_data(int* array);
int main(void)
{
	int i, data[5];
	get_data(data);
	for (i = 0; i < 5; i++)
		printf("%d번째 data:%d\n", i + 1, data[i]);
	return 0;
}
void get_data(int* array)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 data를 입력하시오: ", i+1);
		scanf("%d", &*(array + i));
	}
}
