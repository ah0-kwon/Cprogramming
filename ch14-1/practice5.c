// **********************************************
// 제  목  :  14-1 실습과제5 소스코드
// 날  짜  :  2026년 9월23일
// 작성자  :  2600015 권아영
// **********************************************

#include <stdio.h>

int SBV(int num);
void SBR(int* num);

int main(void)
{
	int num1 = 10;
	int num2 = 10;
	printf("기존 저장된 값: %d\n", num1);
	num1 = SBV(num1);
	printf("Call-By-Value 기반: %d\n", num1);
	printf("기존 저장된 값: %d\n", num2);
	SBR(&num2);
	printf("Call-By-Reference 기반: %d\n", num2);
	return 0;
}
int SBV(int num)
{
	return num * 100;
}
void SBR(int* num)
{
	*num *= 100;
}
