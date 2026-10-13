#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)  
#include <stdio.h>
int main(void)
{
	char ch;
	while (1)
	{
		printf("문자입력: ");
		scanf(" %c", &ch);
		if (ch == 'q' || ch == 'Q')
			break;
		else
			printf("입력된 문자는 %c \n", ch);
	}
	return 0;
}
