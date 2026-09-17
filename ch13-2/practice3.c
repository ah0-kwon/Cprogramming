#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>

int main(void)
{
	char a[100];
	printf("문자열을 입력하시오: ");
	scanf("%s", a);
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}
		else if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	printf("변환 결과: %s", a);
	return 0;

}
