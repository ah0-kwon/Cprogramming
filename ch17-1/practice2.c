#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 
#include <stdio.h>
int get_max(int** arr, int n);
int main(void)
{
	int num1 = 50, num2 = 20, num3 = 30;
	int* ptrarr[3] = { &num1, &num2, &num3 };
	int max;
	max = get_max(ptrarr, 3);
	printf("최댓값:%d\n", max);
	return 0;
}
int get_max(int** arr, int n)
{
	int i, max = **arr;
	for (i = 0; i < n; i++) 
	{
		if (**(arr + i) > max)
		{
			max = **(arr + i);
		}
	
	}
	return max;
}
