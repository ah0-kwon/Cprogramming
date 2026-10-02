// **********************************************
// 제  목  :  16-1 실습과제3 소스코드
// 날  짜  :  2026년 10월2일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 
#include <stdio.h>
int main(void)
{
	int arr[3][3] = { {-5,2,35},{-20,5,100},{-75,5,-25} };
	int i, j, x, y, max = arr[0][0];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}
	printf("최댓값은 %d\n", max);
	printf("위치는 %d행, %d열", x, y);
	return 0;
}
