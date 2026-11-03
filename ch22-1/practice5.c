// **********************************************
// 제  목  :  22-1 실습과제5 소스코드
// 날  짜  :  2026년 11월3일
// 작성자  :  2600015 권아영
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
struct point {
	int x;
	int y;
};
int main(void)
{
	struct point p1 = { 10,10 }, p2 = { 20,20 };
	printf("교환전 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환전 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	struct point temp = p1;
	p1 = p2;
	p2 = temp;
	printf("교환후 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환후 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	return 0;
}
