// **********************************************
// 제  목  :  22-1 실습과제4 소스코드
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
	struct point p1, p2;
	int w, h;
	printf("좌측상단의 좌표 입력: ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("우측하단의 좌표 입력: ");
	scanf("%d %d", &p2.x, &p2.y);
	w = (p2.x - p1.x);
	h = (p2.y - p1.y);
	printf("사각형의 폭: %d\n", w);
	printf("사각형의 높이: %d\n", h);
	return 0;
}
