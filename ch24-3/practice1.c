// **********************************************
// 제  목  :  24-3 실습과제1 소스코드
// 날  짜  :  2026년 11월24일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
	FILE* fp1 = fopen("a.txt", "rt");
	FILE* fp2 = fopen("b.bin", "wb");

	if (fp1 == NULL || fp2 == NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}

	int num[10];

	for (int i = 0; i < 10; i++)
	{
		if (fscanf(fp1, "%d", &num[i]) != 1)
		{
			puts("파일 읽기 실패");
			return -1;
		}
	}
	fwrite(num, sizeof(int), 10, fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
