// **********************************************
// 제  목  :  16-1 실습과제1 소스코드
// 날  짜  :  2026년 10월2일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 
#include <stdio.h>
int main(void)
{
	int i, j;
	int arr1[2][2] = { {2,4},{5,-5} };
	int arr2[2][2] = { {-2,3},{0,-5} };
	int result[2][2];

	printf("연산결과: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			result[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
